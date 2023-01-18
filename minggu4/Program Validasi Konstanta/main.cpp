/*
Judul : Program Validasi Konstanta
Ket : Program untuk mengecek suatu bilangan bulat apakah lebih dari suatu nilai variabel konstanta
By : Restu Lestari Mulianingrum
Tgl : 5 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
//Kamus
    int bilangan;
    const int x = 10;

//Algoritma
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    if (bilangan > x)
    {
        cout << bilangan << " adalah bilangan lebih dari " << x;
        cout << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
