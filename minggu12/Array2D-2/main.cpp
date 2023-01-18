/*
PROGRAM ARRAY 2D-2
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 14 Desember 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
     int jumbaris, jumkolom;
     cout << "Input Array [jumbaris][jumkolom] : ";
     cin >> jumbaris >> jumkolom;
     //DEKLARASI ARRAY 2D
     int X[jumbaris][jumkolom];

    //ALGORITMA
    //INPUT ARRAY 2D
    for (int baris = 0; baris < jumbaris; baris++){
        for (int kolom = 0; kolom < jumkolom; kolom++){
            cout << "Input nilai baris ke-";
            cout << baris << " kolom ke-";
            cout << kolom << " = ";
            cin >> X[baris][kolom];
        }
    cout << endl;
    }

    //MENCETAK ARRAY 2D
    for (int baris = 0; baris < jumbaris; baris++){
        for (int kolom = 0; kolom < jumkolom; kolom++){
            cout << X[baris][kolom];
            cout << "\t";
        }
    cout << endl;
    }
    return 0;
}
