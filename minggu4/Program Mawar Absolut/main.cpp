/*
Judul : Program Mawar Absolut
Ket : Program untuk mengoutputkan bilangan bulat positif jika user menginputkan negatif
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
    if (bilangan < 0)
    {
        bilangan = bilangan * -1;
    }
    cout << bilangan << " adalah bilangan positif";
    cout << endl << "Cek Selesai";
    return 0;
}
