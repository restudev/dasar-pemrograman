/*
PROGRAM BEASISWA
{Program untuk mengecek kelulusan beasiswa berdasarkan IPK}
Nama     : Restu Lestari Mulianingrum
NIM      : A11.2022.14668
Tanggal  : 14 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    float ipk;

    //ALGORITMA
    cout << "Masukkan IPK : ";
    cin >> ipk;
    if (ipk >= 3.5 && ipk <= 4){
        cout << "lulus";
    }
    else if (2.5 <= ipk && ipk < 3.5){
        cout << "dipertimbangkan";
    }
    else if (ipk < 2.5 && ipk >= 0){
        cout << "tidak lulus";
    }
    else{
        cout << "inputan salah!" << endl;
    }
    return 0;
}
