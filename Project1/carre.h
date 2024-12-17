

#pragma once
#include <iostream>

// D�claration de la classe CCarre
class CCarre {
private:
    int sx;    // Coordonn�e x
    int sy;    // Coordonn�e y
    unsigned int cote;  // Longueur du c�t�

public:
    // Constructeur par d�faut
    CCarre();

    // Constructeur param�tr�
    CCarre(int x, int y, unsigned int c);

    // M�thodes pour modifier les valeurs
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);

    // M�thodes pour r�cup�rer les valeurs
    int Getsx();
    int Getsy();
    unsigned int GetCote();

    // Afficher les caract�ristiques
    void Afficher();

    // D�placer selon une direction et un saut
    void Deplacer(char direction, int saut);

    // D�placer selon un vecteur (dx, dy)
    void Deplacer(int dx, int dy);
};
