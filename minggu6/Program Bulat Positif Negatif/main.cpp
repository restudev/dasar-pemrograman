/*
PROGRAM BILANGAN BULAT POSITIF NEGATIF
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tangga  : 14 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bilangan;

    //ALGORITMA
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if (bilangan > 0){
        cout << bilangan << " adalah bilangan positif";
    }
    else if (bilangan < 0){
        cout << bilangan << " adalah bilangan negatif";
    }
    else if (bilangan == 0){
        cout << bilangan << " adalah nol";
    }
    else {
        cout << bilangan << " inputan salah!";
    }
    return 0;
}
