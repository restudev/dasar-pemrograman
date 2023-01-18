/*
PROGRAM ARRAY 2D DENGAN INPUTAN
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 14 Desember 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
     int X[3][4];

    //ALGORITMA
    //INPUT ARRAY 2D
    for (int baris = 1; baris < 3; baris++){
        for (int kolom = 1; kolom < 3; kolom++){
            cout << "Input nilai baris ke-";
            cout << baris << " kolom ke-";
            cout << kolom << " = ";
            cin >> X[baris][kolom];
        }
    cout << endl;
    }

    //MENCETAK ARRAY 2D
    for (int baris = 1; baris < 4; baris++){
        for (int kolom = 1; kolom < 4; kolom++){
            cout << X[baris][kolom];
            cout << "\t";
        }
    cout << endl;
    }
    return 0;
}
