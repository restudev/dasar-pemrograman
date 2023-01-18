/*
ARRAY 3D
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 14 Desember 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int X[2][3][2]={
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
    };
    //ALGORITMA
    for (int baris = 0; baris < 2; baris++){
        for (int kolom = 0; kolom < 3; kolom++){
                for (int dalam = 0; dalam < 2; dalam++){
                    cout << X[baris][kolom][dalam];
                    cout << "\t";
                }
        cout << endl;
        }
    cout << endl;
    }
    return 0;
}
