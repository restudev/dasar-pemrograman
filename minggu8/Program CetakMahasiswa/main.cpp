/*
Program CetakMahasiswa
Nama : Restu Lestari Mulianingrum
NIM : A11.2022.14668
Tanggal : 9 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n;
/*
    //ALGORITMA
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    for (; n > 0; n--){
        cout << "Mahasiswa" << endl;
    }
*/
    //WHILE
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    while (n > 0){
        cout << "Mahasiswa" << endl;
        n--;
    }

    //DO WHILE
    cout << "Masukkan jumlah pengulangan : ";
    cin >> n;
    do {
         cout << "Mahasiswa" << endl;
         n--;
    } while (n > 0);

    return 0;
}

