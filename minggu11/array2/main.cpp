/*
PROGRAM ARRAY VERSI 2
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
    int banyaknilai;
    int nilai []={1,2,3,4,5};
    //banyaknilai = sizeof(nilai)/sizeof(*nilai);
    //memset(nilai, 0, 5*sizeof(int));

    //int nilai [5];
    //nilai [0] = 1;

    //ALGORITMA
    //CETAK OUTPUT ARRAY (CETAK ELEMEN ARRAY)
    /*
    cout << banyaknilai << endl;
    cout << nilai [0] << endl;
    cout << nilai [1] << endl;
    cout << nilai [2] << endl;
    cout << nilai [3] << endl;
    cout << nilai [4] << endl;
    */

    //OUTPUT ARRAY DENGAN LOOPING
    for (int i=0; i < 5; i++){
        cout << nilai [i] << endl;
        cout << &nilai [i] << endl; //untuk melihat array disimpan di memory mana
    }
    return 0;
}
