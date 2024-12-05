#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    // Cr�ation de deux carr�s
    CCarre c1, c2;

    // Initialisation des caract�ristiques de c1
    c1.Setsx(5);
    c1.Setsy(10);
    c1.Setcote(20);

    cout << "Caracteristiques initiales de c1 :" << endl;
    c1.Afficher();

    // Initialisation des caract�ristiques de c2
    c2.Setsx(15);
    c2.Setsy(25);
    c2.Setcote(30);

    cout << "\nCaract�ristiques initiales de c2 :" << endl;
    c2.Afficher();

    // Test de la m�thode Deplacer avec c1
    cout << "\nDeplacement de c1 vers le nord avec un saut de 3..." << endl;
    c1.Deplacer('n', 3);
    c1.Afficher();

    // Test de la m�thode surcharg�e Deplacer avec un vecteur pour c1
    cout << "\nDeplacement de c1 selon le vecteur (dx = 4, dy = -2)..." << endl;
    c1.Deplacer(4, -2);
    c1.Afficher();

    // Test de la m�thode Deplacer avec c2
    cout << "\nDeplacement de c2 vers l'est avec un saut de 5..." << endl;
    c2.Deplacer('e', 5);
    c2.Afficher();

    // Test de la m�thode surcharg�e Deplacer avec un vecteur pour c2
    cout << "\nDeplacement de c2 selon le vecteur (dx = -3, dy = 7)" << endl;
    c2.Deplacer(-3, 7);
    c2.Afficher();

    return 0;
}
