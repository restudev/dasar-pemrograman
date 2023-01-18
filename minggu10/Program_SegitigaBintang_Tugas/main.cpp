/*
PROGRAM SEGITIGA BINTANG
{program untuk menampilkan segitiga bintang}
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 01 Desember 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n , i , j;

    //ALGORITMA
    //DOWHILE-WHILE
    cout << "inputkan tinggi segitiga : ";
    cin >> n;

    do {
        j = 0;
        while (j <= i){
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
   } while (i < n);
   return 0;
}



//bintang dowhile-while
//bintangterbalik while-dowhile
