/*
Judul : Program Genap Lebih dari Dua
Ket : Program untuk mengecek apakah a bilangan genap yang lebih dari 2
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
    if ((bilangan % 2 == 0) && (bilangan > 2))
    {
        cout << bilangan << " adalah bilangan genap yang lebih dari 2 ";
        cout << endl;
    }
    cout << "Cek Selesai";
    return 0;
}
