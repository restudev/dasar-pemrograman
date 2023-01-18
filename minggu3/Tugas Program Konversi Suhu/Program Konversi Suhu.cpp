#include <iostream>

using namespace std;

int main()
{
    /*
    PROGRAM KONVERSI SUHU
    Program untuk mengkonversi/mengubah satuan suhu
    Dibuat Oleh : Restu Lestari M
    Pada Tanggal 29 September 2022
    */

    //KAMUS
    float C, R, F, K;

    //ALGORITMA
    cout << "Konversi Suhu" << endl;
    cout << "==================="<< endl;
    cout << "Masukkan Celcius = "; cin >>C;
    R = C * 4/5;
    K = C + 273;
    F = (C * 9/5) + 32;
    cout << "Derajat Reamur = " << R << endl;
    cout << "Derajat Fahrenheit = " << F <<endl;
    cout << "Derajat Kelvin = " << K << endl;


    return 0;
}
