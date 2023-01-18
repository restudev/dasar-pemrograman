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
    int i = 0;
    int n;

    //ALGORITMA
    cout << "Input berapa kali diulang : ";
    cin >> n;
    while (true){
        i++;
        cout << "Mahasiswa kece" << endl;
        if (i > n) {
            cout << "Stop" << endl;
            break;

        }
    }
    cout << "selesai" << endl;
    return 0;
}


