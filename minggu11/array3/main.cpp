/*
PROGRAM ARRAY VERSI 3
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 7 Desember 2022
*/
#include <iostream>

using namespace std;

int main()
{
/*
    //KAMUS
    //1. DEKLARASI ARRAY
    int nilai [5];

    //2. INISIALISASI ARRAY (INPUT)
    for (int i = 0; i < 5; i++){
        cout << "Input nilai ke-" << i+1 << " : ";
        cin >> nilai[i];
    }

    //ALGORITMA
    //OUTPUT ARRAY
    for (int i = 0; i < 5; i++){
        cout << " Nilai ke-" <<i+1 << " : ";
        cout << nilai [i] << endl;
    }
    return 0;
}
*/
//KAMUS
    //1. DEKLARASI ARRAY
    int n;

    //2. INISIALISASI ARRAY (INPUT)
    cout << "Input n : ";
    cin >> n;
    int nilai [n];
    for (int i = 0; i < n; i++){
        cout << "Input nilai ke-" << i+1 << " : ";
        cin >> nilai[i];
    }

    //ALGORITMA
    //OUTPUT ARRAY
    for (int i = 0; i < n; i++){
        cout << " Nilai ke-" << i+1 << " : ";
        cout << nilai [i] << endl;
    }
    return 0;
}
