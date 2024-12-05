#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    // Création d'un carré
    CCarre c1;

    // Initialisation des caractéristiques
    c1.Setsx(5);
    c1.Setsy(10);
    c1.Setcote(20);

    cout << "Caracteristiques initiales du carre :" << endl;
    c1.Afficher();

    // Déplacement du carré
    cout << "\nDeplacement du carre vers le nord avec un saut de 3..." << endl;
    c1.Deplacer('n', 3);
    c1.Afficher();

    cout << "\nDeplacement du carre vers l'est avec un saut de 5..." << endl;
    c1.Deplacer('e', 5);
    c1.Afficher();

    cout << "\nDeplacement du carre vers le sud avec un saut de 2..." << endl;
    c1.Deplacer('s', 2);
    c1.Afficher();

    cout << "\nDeplacement du carre vers l'ouest avec un saut de 4..." << endl;
    c1.Deplacer('o', 4);
    c1.Afficher();

    return 0;
}
