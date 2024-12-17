#include "carre.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
CCarre::CCarre() : sx(0), sy(0), cote(0) {}

// Constructeur paramétré
CCarre::CCarre(int x, int y, unsigned int c) : sx(x), sy(y), cote(c) {}

// Définir la valeur de sx
void CCarre::Setsx(int sx1) {
    this->sx = sx1;
}

// Définir la valeur de sy
void CCarre::Setsy(int sy1) {
    this->sy = sy1;
}

// Définir la valeur de cote
void CCarre::Setcote(unsigned int cote1) {
    this->cote = cote1;
}

// Obtenir la valeur de sx
int CCarre::Getsx() {
    return sx;
}

// Obtenir la valeur de sy
int CCarre::Getsy() {
    return sy;
}

// Obtenir la valeur de cote
unsigned int CCarre::GetCote() {
    return cote;
}

// Afficher les caractéristiques du carré
void CCarre::Afficher() {
    cout << "Carre : sommet (" << sx << ", " << sy << "), cote = " << cote << endl;
}

// Déplacer le carré selon une direction et un saut
void CCarre::Deplacer(char direction, int saut) {
    switch (direction) {
    case 'n': // Nord
        sy -= saut;
        break;
    case 's': // Sud
        sy += saut;
        break;
    case 'e': // Est
        sx += saut;
        break;
    case 'o': // Ouest
        sx -= saut;
        break;
    default:
        cout << "Direction invalide !" << endl;
        break;
    }
}

// Déplacer le carré selon un vecteur (dx, dy)
void CCarre::Deplacer(int dx, int dy) {
    sx += dx; // Ajout de dx aux coordonnées x
    sy += dy; // Ajout de dy aux coordonnées y
}
