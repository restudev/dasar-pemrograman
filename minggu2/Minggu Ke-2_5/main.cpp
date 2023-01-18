/*
JAWABAN SOAL NO.5
Nama	: Restu Lestari Mulianingrum
NIM 	: A11.2022.14668
*/
#include <iostream>

using namespace std;

int main()
{
    //Algoritma Keliling_Alas, Luas, Volume_Tabung
    //{program Program mencari keliling alas, luas, dan volume tabung}

    //kamus
    int jarijari, tinggi; //deklarasi
    float phi, kelilingalas, luas, volume; //deklarasi

    //algoritma
    jarijari = 8.5;
    phi = 3.14;
    tinggi = 13.7;
    kelilingalas = 2 * phi * jarijari;
    luas = 2 * phi * jarijari * jarijari;
    volume = phi * jarijari * jarijari * tinggi;
    cout << "Program mencari keliling alas, luas, dan volume tabung" << endl;
    cout << "======================================================" << endl;
    cout << "Keliling Alas = " << kelilingalas << endl;
    cout << "Luas = " << luas << endl;
    cout << "Volume = " << volume << endl;
}
