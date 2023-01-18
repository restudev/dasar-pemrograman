/*
KUIS
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 8 Desember 2022
*/
#include <iostream>
using namespace std;

int main(){
//KAMUS
    //1. DEKLARASI ARRAY
    int n;
    float sumgenap=0, sumganjil=0, bykgenap, bykganjil;


    //2. INISIALISASI ARRAY (INPUT)
    cout << "Input jumlah array [n] : ";
    cin >> n;
    int nilai[n];
    for (int i = 0; i < n; i++){
        cout << "Bilangan ke-" << i+1 << " : ";
        cin >> nilai[i];
    }

    //ALGORITMA
    //OUTPUT ARRAY
    cout << endl << "================================================================================================" << endl;
    cout << "Bilangan Genap : ";
    for (int i = 0; i < n; i++){
        if (nilai[i] % 2 == 0){
            cout << nilai[i] << " ";
            sumgenap += nilai[i];
            bykgenap = bykgenap+1;
        }
    }

    cout << endl << "Jumlah deret bilangan genap: " << sumgenap << endl;
    cout << "Rata-rata deret genap: " << sumgenap/bykgenap << endl;
    cout << endl;

    cout << endl << "================================================================================================" << endl;
    cout << "Bilangan Ganjil : ";
    for (int i = 0; i < n; i++){
        if (nilai[i] % 2 == 1){
        cout << nilai[i] << " ";
        sumganjil += nilai[i];
        bykganjil = bykganjil + 1;
        }
    }
    cout << endl <<"Jumlah deret bilangan ganjil: " << sumganjil << endl;
    cout << "Rata-rata deret ganjil: " << sumganjil/bykganjil << endl;
}

