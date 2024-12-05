#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    int x1, y1, cote;
    CCarre c1;
    CCarre c2;
    c2.Afficher();
    c2.deplacer('n', 3);
    c1.Setsx(3);
    c1.Setsy(15);
    c1.Setcote(100);
    c1.Afficher();
    cout << "Cote:" << c1.GetCote() << endl;
    
    return 0;
}
