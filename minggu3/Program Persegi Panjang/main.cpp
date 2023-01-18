#include <iostream>

using namespace std;

int main()
{
    /*
    PROGRAM PERSEGI PANJANG
    Program untuk menghitung keliling dan luas persegi panjang
    Dibuat Oleh : Restu Lestari M
    Pada Tanggal 28 September 2022
    */

    //KAMUS
    float p, l;
    float hasilkeliling, hasilluas;

    //ALGORITMA
    cout << "Masukkan p = "; cin >> p;
    cout << "Masukkan l = "; cin >> l;
    hasilkeliling = 2*(p+l);
    hasilluas = p*l;
    cout << "Keliling Persegi Panjang = " << hasilkeliling << endl;
    cout << "Luas Persegi Panjang = " << hasilluas << endl;
}
