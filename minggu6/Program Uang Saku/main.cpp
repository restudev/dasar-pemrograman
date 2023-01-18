/*
PROGRAM UANG SAKU
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tangga  : 14 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int uangsaku;
    char input;

    //ALGORITMA
    cout << "Apakah Anda Mahasiswa: ";
    cin >> input;
    if ((input == 'y')||(input == 'Y')){
        cout << "Masukkan Uang Saku: ";
        cin >> uangsaku;
        if (uangsaku > 1000000){
            cout << "Mahasiswa Sultan";
        }
        else {
            cout << "Bukan Mahasiswa Sultan";
        }
    }
    else if ((input == 'n')||(input == 'N')){
        cout << "Bukan Mahasiswa";
    }
    return 0;
}
