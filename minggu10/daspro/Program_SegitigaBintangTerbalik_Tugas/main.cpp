/*
PROGRAM SEGITIGA BINTANG TERBALIK
{program untuk menampilkan segitiga bintang terbalik}
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.1468
Tanggal : 01 Desember 2022
*/
#include <iostream>

using namespace std;

int main()
{
    // KAMUS
        int n , i, j;

    //WHILE-DOWHILE
    cout << "inputkan tinggi segitiga : ";
    cin >> n;

    while (i < n){
        i++;
        j = 0;
        do {
            j++;
        cout << " * ";
        }
        while(j <= n-i);
        cout << endl;
    }
    return 0;
}
