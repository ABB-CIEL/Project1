#include "carre.h"
#include <iostream>

using namespace std;

void CCarre::Setsx(int sx1) {
    this->sx = sx1;
}

void CCarre::Setsy(int sy1) {
    this->sy = sy1;
}

void CCarre::Setcote(unsigned int cote1) {
    this->cote = cote1;
}

int CCarre::Getsx() {
    return sx;
}

int CCarre::Getsy() {
    return sy;
}

unsigned int CCarre::GetCote() {
    return cote;
}

void CCarre::Afficher() {
    cout << "Carre : sommet (" << sx << ", " << sy << "), cote = " << cote << endl;
}

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
