/*
PengulanganBilanganBulat
Nama : Restu Lestari Mulianingrum
NIM : A11.2022.14668
Tanggal : 9 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n, i;
/*
    //ALGORITMA
    i = 1;
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    for (; n > 0; n--){
        cout << "i = " << i << " n = " << n << endl;
        i++;
    }

    //WHILE
    i = 1;
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    while (n > 0){

        cout << "i = " << i << " n = " << n << endl;
        n--; i++;

    }
*/
    //DO WHILE
    i = 1;
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    do {
         cout << "i = " << i << " n = " << n << endl;
         n--; i++;
    } while (n > 0);

     //WHILE
    i = 1;
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    while (i <= n){

        cout << "i = " << i << " n = " << n << endl;
        n--; i++;
    return 0;
}

