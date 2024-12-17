#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    // Création de carrés avec le constructeur par défaut et paramétré
    CCarre c1, c2(15, 25, 30);  // c2 est créé avec un constructeur paramétré
    CCarre* c3 = new CCarre(25, 35, 40);  // c3 est créé dynamiquement avec new et un constructeur paramétré
    CCarre c4;

    // Initialisation des caractéristiques de c1
    c1.Setsx(5);
    c1.Setsy(10);
    c1.Setcote(20);

    cout << "Caractéristiques initiales de c1 :" << endl;
    c1.Afficher();

    cout << "\nCaractéristiques initiales de c2 (créé avec le constructeur paramétré) :" << endl;
    c2.Afficher();

    cout << "\nCaractéristiques initiales de c3 (créé dynamiquement avec new et le constructeur paramétré) :" << endl;
    c3->Afficher();

    // Initialisation des caractéristiques de c4
    c4.Setsx(35);
    c4.Setsy(45);
    c4.Setcote(50);

    cout << "\nCaractéristiques initiales de c4 :" << endl;
    c4.Afficher();

    // Test de la méthode Deplacer avec c1
    cout << "\nDéplacement de c1 vers le nord avec un saut de 3..." << endl;
    c1.Deplacer('n', 3);
    c1.Afficher();

    // Test de la méthode surchargée Deplacer avec un vecteur pour c1
    cout << "\nDéplacement de c1 selon le vecteur (dx = 4, dy = -2)..." << endl;
    c1.Deplacer(4, -2);
    c1.Afficher();

    // Test de la méthode Deplacer avec c2
    cout << "\nDéplacement de c2 vers l'est avec un saut de 5..." << endl;
    c2.Deplacer('e', 5);
    c2.Afficher();

    // Test de la méthode surchargée Deplacer avec un vecteur pour c2
    cout << "\nDéplacement de c2 selon le vecteur (dx = -3, dy = 7)" << endl;
    c2.Deplacer(-3, 7);
    c2.Afficher();

    // Test de la méthode Deplacer avec c3
    cout << "\nDéplacement de c3 vers le sud avec un saut de 2..." << endl;
    c3->Deplacer('s', 2);
    c3->Afficher();

    // Test de la méthode surchargée Deplacer avec un vecteur pour c3
    cout << "\nDéplacement de c3 selon le vecteur (dx = 1, dy = 1)..." << endl;
    c3->Deplacer(1, 1);
    c3->Afficher();

    // Test de la méthode Deplacer avec c4
    cout << "\nDéplacement de c4 vers l'ouest avec un saut de 4..." << endl;
    c4.Deplacer('o', 4);
    c4.Afficher();

    // Test de la méthode surchargée Deplacer avec un vecteur pour c4
    cout << "\nDéplacement de c4 selon le vecteur (dx = -2, dy = -3)" << endl;
    c4.Deplacer(-2, -3);
    c4.Afficher();

    // Création d'un tableau d'objets CCarre
    CCarre carres[4] = { c1, c2, *c3, c4 };  // Passer *c3 car c3 est un pointeur

    // Affichage des caractéristiques de chaque carré
    for (int i = 0; i < 4; i++) {
        cout << "\nCaractéristiques du carré " << i + 1 << " :" << endl;
        carres[i].Afficher();
    }

    // Libération de la mémoire allouée dynamiquement pour c3
    delete c3;

    return 0;
}
