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

void CCarre::Afficher() {
    cout << "Carre de sommet(" << sx << "," << sy << ") avec cote de longeur" << cote << " et surface " << cote << endl;
}

void CCarre::deplacer(char direction, int saut)
{
}

void CCarre::deplacer(int sx, int dy)
{
}

int CCarre::Getsx() {
    return sx;
}

int CCarre::Getsy() {
    return sy;
}

unsigned int CCarre::GetCote()
{
    return cote;
}
