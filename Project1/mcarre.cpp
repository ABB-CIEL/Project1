#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    int x1, y1, cote;

    cout << "La valeur de x : " << endl;
    cin >> x1;

    CCarre carre;
    carre.Setsx(x1);

    cout << "La valeur de y : " << endl;
    cin >> y1;
    carre.Setsy(y1);

    cout << "La valeur de cote : " << endl;
    cin >> cote;
    carre.Setcote(cote);

    carre.Afficher();

    return 0;
}
