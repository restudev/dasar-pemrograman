/*
PEMBAHSAN SIMULASI UAS NO.1
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 26 Desember 2022
*/
#include <iostream>
using namespace std;
int main()
{
    //KAMUS
        int n;
    //ALGORITMA
    //sebelum di balik outputnya
    /*
        cout << "Inputkan jumlah n : ";
        cin >> n;
        for (int i = 1; i <= n; i++){
            cout << i << " * " << i << " = " << i*i << endl;
        }
        return 0;
    */
    //sesudah di balik outputnya
        cout << "Inputkan jumlah n : ";
        cin >> n;
        int data[n];
        //Elemen Array
        for (int i = 1; i <= n; i++){
            data [i-1] = i*i;
            cout << data[i-1] << " ";
        }
        cout << endl;
        for (int i = 0; i < n/2; i++){
            cout << data[i*2+1] << " ";
            cout << data[i*2] << " ";
        }

        return 0;
    /*
        cout << "Inputkan jumlah n : ";
        cin >> n;
        for (int i = 1; i <= n; i+=2){
            cout << i+1 << " * " << i+1 << " = " << (i+1) * (i+1) << endl;
            cout << i << " * " << i << " = " << i*i << endl;
        }
        return 0;
     */

}
