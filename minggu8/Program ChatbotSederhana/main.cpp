/*
Program ChatBotSederhana
Nama : Restu Lestari Mulianingrum
NIM : A11.2022.14668
Tanggal : 9 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char belokkiri;

    //ALGORITMA
    do
    {
       cout << "apa mau belok kiri? (y/t) : ";
       cin >> belokkiri;
    }
    while (belokkiri != 'y') ;
    cout << "finish";

    return 0;
}
