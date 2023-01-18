/*
PROGRAM ARRAY LOOPING
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 7 Desember 2022
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    //KAMUS
    string namahari[7];
    int i;

    //ALGORITMA
    i = 0;
    while (i < 7){
        cout << "Input Hari Ke-" << i+1 << " : ";
        cin >> namahari[i];
        i++;
    }
    i = 0;
    while (i < 7)
    {
        cout << "Hari Ke-" << i+1 << " " << namahari[i] << endl;
        i++;
    }

    return 0;
}
