/*
Judul : Program Validasi
Ket : Program untuk mengecek suatu bilangan bulat apakah lebih dari 0
By : Restu Lestari Mulianingrum
Tgl : 5 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
//Kamus
    int bilangan;
//Algoritma
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    if (bilangan > 0)
    {
        cout << bilangan << " adalah bilangan lebih dari 0";
        cout << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
