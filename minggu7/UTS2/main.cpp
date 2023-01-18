#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //KAMUS
    float x1, x2, y1, y2, jarak;

    //ALGORITMA
    cout << "PROGRAM MENGHITUNG JARAK ANTARA 2 TITIK" << endl;
    cout << "========================================" << endl;
    cout << "Nilai x1 = ";
    cin >> x1;
    cout << "Nilai y1 = ";
    cin >> y1;
    cout << "Nilai x2 = ";
    cin >> x2;
    cout << "Nilai y2 = ";
    cin >> y2;
    jarak = sqrt ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout << "Jarak = " << jarak << endl;

    return 0;
}
