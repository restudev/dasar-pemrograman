/*
PEMBAHSAN SIMULASI UAS NO.2
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 26 Desember 2022
*/
#include <iostream>
using namespace std;

int main() {
    // KAMUS
    int n;


    //ALGORITMA
    cout << "Inputkan jumlah elemen array [n] : ";
    cin >> n;
    int data[n];

    //input elemen array
    for (int i = 0; i < n; i++){
        cout << "inputkan bilangan ke-" << i+1 << " : ";
        cin >> data[i];
    }

    //cetak array ganjil
    for (int i = 0; i < n; i++){
        if (data[i] % 2 == 1){
            cout << data [i] << " ";
        }
    }
    cout << " || ";
    //cetak array genap
    for (int i = 0; i < n; i++){
        if (data[i] % 2 == 0){
            cout << data [i] << " ";
        }
    }
    cout << endl;
    //cetak array ganjil terbalik
    for (int i = n-1; i >= 0; i--){
        if (data[i] % 2 == 1){
            cout << data [i] << " ";
        }
    }
    cout << " || ";
    //cetak array genap terbalik
    for (int i = n-1; i >= 0; i--){
        if (data[i] % 2 == 0){
            cout << data [i] << " ";
        }
    }
    return 0;
}
