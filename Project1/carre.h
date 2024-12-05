#pragma once
#include <iostream>

// Déclaration de la classe CCarre
class CCarre {
private:
    int sx;    // Coordonnée x
    int sy;    // Coordonnée y
    unsigned int cote;  // Longueur du côté

public:
    // Déclarations des méthodes
    void Setsx(int sx1);                   // Définir la valeur de sx
    void Setsy(int sy1);                   // Définir la valeur de sy
    void Setcote(unsigned int cote1);      // Définir la valeur de cote

    int Getsx();                           // Obtenir la valeur de sx
    int Getsy();                           // Obtenir la valeur de sy
    unsigned int GetCote();                // Obtenir la valeur de cote

    void Afficher();                       // Afficher les caractéristiques du carré

    void Deplacer(char direction, int saut); // Déplacer le carré selon une direction et un saut
};
