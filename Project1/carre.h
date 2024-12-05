#pragma once
// D�claration de la classe point
class CCarre
{
    // D�claration des attributs priv�s
private:
    int sx;    // Coordonn�e x
    int sy;    // Coordonn�e y
   unsigned int  cote;  // Longueur du c�t�

// D�claration des m�thodes publiques
public:

    // Proc�dure pour d�finir la valeur de sx
    void Setsx(int sx1);


    // Proc�dure pour d�finir la valeur de sy
    void Setsy(int sy1);


    // Proc�dure pour d�finir la valeur de cote
    void Setcote(unsigned int cote1);
    // Retourner la valeur de sx
    int Getsx();

    // Fonction pour obtenir la valeur de sy
    int Getsy();

    // Getter for cote
    unsigned int GetCote();

    // Fonction pour obtenir la valeur de cote
    void Afficher();

    // Proc�dure pour d�placer le carr� selon une direction et un saut
    void deplacer(char direction, int saut); 
    // Proc�dure pour d�placer le carr� � une position donn�e
    void deplacer(int sx, int dy);          // Move to a new x, y position

    

};