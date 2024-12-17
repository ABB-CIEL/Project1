

#pragma once
#include <iostream>

// Déclaration de la classe CCarre
class CCarre {
private:
    int sx;    // Coordonnée x
    int sy;    // Coordonnée y
    unsigned int cote;  // Longueur du côté

public:
    // Constructeur par défaut
    CCarre();

    // Constructeur paramétré
    CCarre(int x, int y, unsigned int c);

    // Méthodes pour modifier les valeurs
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);

    // Méthodes pour récupérer les valeurs
    int Getsx();
    int Getsy();
    unsigned int GetCote();

    // Afficher les caractéristiques
    void Afficher();

    // Déplacer selon une direction et un saut
    void Deplacer(char direction, int saut);

    // Déplacer selon un vecteur (dx, dy)
    void Deplacer(int dx, int dy);
};
