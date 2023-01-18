/*
PROGRAM WUJUD AIR
{menuliskan wujud air sesuai nilai s}
Nama   : Restu Lestari Mulianingrum
NIM    : A11.2022.14668
Tgl    : 14 Oktober 2022

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int s;

    //ALGORITMA

    cout << "Input Nilai S : ";
    cin >> s;
    if (s <= 0){
        cout << "beku";
    }
    else if ((0 < s ) && (s <= 100 )){
        cout << "cair";
    }
    else if (s > 100){
        cout << "uap";
    }
    else {
        cout << "Inputan salah" << endl;
    }
    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int s;

    //ALGORITMA

    cout << "Input Nilai S : ";
    cin >> s;
    if (s <= 0){
        cout << "beku" << endl;
    }
    else if (s == 0){
        cout << "beku-cair" << endl;
    }
    else if ((0 < s ) && (s < 100 )){
        cout << "cair" << endl;
    }
    else if (s > 100){
        cout << "uap" << endl;
    }
    else if (s == 100){
        cout << "cair-uap" << endl;
    }
    else {
        cout << "Inputan salah" << endl;
    }
    return 0;
}
