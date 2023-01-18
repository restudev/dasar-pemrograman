/*
Program Chatbot Bucin
Notasi Pengulangan -> Kondisi Pengulangan
Nama : Restu Lestari Mulianingrum
NIM : A11.2022.14668
Tanggal : 25 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char pilih;

    //ALGORITMA
    do {
        cout << "Apa kamu sayang aku? (y/t) : ";
        cin >> pilih;
    } while (pilih != 'y');
    cout << "selesai" << endl;
    return 0;
}
