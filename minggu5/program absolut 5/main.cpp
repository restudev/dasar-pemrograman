/*
Judul : Program Mawar Absolut
Ket : Program untuk mengoutputkan bilangan bulat positif jika user menginputkan negatif
By : Restu Lestari Mulianingrum
Tgl : 12 Oktober 2022

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
    if (bilangan % 5 == 0)
    {
        cout << bilangan << " adalah kelipatan 5";
    }
    else
    {
        cout << bilangan << " bukan kleipatan 5";
    }
    cout << endl << "Cek Selesai";
    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
//Kamus
    int bilangan, hasil1;
    string hasil2;

//Algoritma
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    hasil1 = (bilangan < 0)? bilangan*-1:bilangan;
    hasil2 = (bilangan%5==0)? "bilangan kelipatan 5":"bukan bilangan kelipatan 5";
    cout << hasil1 << " adalah " << hasil2;
    cout << endl << "Cek Selesai";
    return 0;
}
