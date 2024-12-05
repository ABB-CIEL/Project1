#pragma once
#include <iostream>

// D�claration de la classe CCarre
class CCarre {
private:
    int sx;    // Coordonn�e x
    int sy;    // Coordonn�e y
    unsigned int cote;  // Longueur du c�t�

public:
    // D�clarations des m�thodes
    void Setsx(int sx1);                   // D�finir la valeur de sx
    void Setsy(int sy1);                   // D�finir la valeur de sy
    void Setcote(unsigned int cote1);      // D�finir la valeur de cote

    int Getsx();                           // Obtenir la valeur de sx
    int Getsy();                           // Obtenir la valeur de sy
    unsigned int GetCote();                // Obtenir la valeur de cote

    void Afficher();                       // Afficher les caract�ristiques du carr�

    void Deplacer(char direction, int saut); // D�placer le carr� selon une direction et un saut
};
