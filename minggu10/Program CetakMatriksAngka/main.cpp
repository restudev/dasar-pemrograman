/*
PROGRAM CETAK MATRIKS ANGKA
{program untuk menampilkan matriks b x k dengan ukuran 3 x 3 yang berisi 1-9}
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.1468
Tanggal : 30 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int b, k, n;

    //ALGORITMA
    n=1;
    for (b = 0; b < 3; b++)
    {
        for (k = 0; k < 3; k++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
    return 0;
}
