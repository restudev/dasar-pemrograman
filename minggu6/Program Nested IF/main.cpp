/*
PROGRAM NESTED IF
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
    cout << "Masukkan bilangan: ";
    cin >> bilangan;
    if (bilangan > 0){
        if (bilangan % 2 == 0){
            if ((bilangan >= 2) && (bilangan <= 10)){
                cout << bilangan << " adalah bilangan positif genap antara 2-10";
            }
            else {
                cout << bilangan << " adalah bilangan positif genap bukan antara 2-10";
            }
        }
        else {
            cout << bilangan << " adalah bilangan positif ganjil";
        }
    }
    else {
        cout << bilangan << " adalah bukan bilangan positif";
    }
    return 0;
}
