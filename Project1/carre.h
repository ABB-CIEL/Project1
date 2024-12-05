#pragma once
// Déclaration de la classe point
class CCarre
{
    // Déclaration des attributs privés
private:
    int sx;    // Coordonnée x
    int sy;    // Coordonnée y
   unsigned int  cote;  // Longueur du côté

// Déclaration des méthodes publiques
public:

    // Procédure pour définir la valeur de sx
    void Setsx(int sx1);


    // Procédure pour définir la valeur de sy
    void Setsy(int sy1);


    // Procédure pour définir la valeur de cote
    void Setcote(unsigned int cote1);
    // Retourner la valeur de sx
    int Getsx();

    // Fonction pour obtenir la valeur de sy
    int Getsy();

    // Getter for cote
    unsigned int GetCote();

    // Fonction pour obtenir la valeur de cote
    void Afficher();

    // Procédure pour déplacer le carré selon une direction et un saut
    void deplacer(char direction, int saut); 
    // Procédure pour déplacer le carré à une position donnée
    void deplacer(int sx, int dy);          // Move to a new x, y position

    

};