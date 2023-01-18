/*
    Nomor 2
    Nama : Restu Lestari Mulianingrum
    NIM  : A11.2022.14668
    Tgl  : 21 Desember 2022
*/
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukkan Jumlah Bilangan : ";
    cin >> n;
    int angka[n];

    for (int i = 0; i<n; i++){
        cout << "Inputkan Bilangan ke - " << i+1 << " : ";
        cin >> angka[i];
    }
    for (int i = 0; i<n; i++){
        if(angka[i]%2 != 0){
            cout << angka[i];
        }
    }
    cout << " ";
    for (int i = 0; i<n; i++){
        if(angka[i]%2 == 0){
            cout << angka[i];
        }
    }

    return 0;
}
