/*
ARRAY 3D DENGAN INPUTAN
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 14 Desember 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int jumbaris, jumkolom, jumdalam;
    cout << "Input Array [jumbaris][jumkolom][jumdalam] : ";
    cin >> jumbaris >> jumkolom >> jumdalam;
    //DEKLARASI ARRAY 3D
    int X[jumbaris][jumkolom][jumdalam];

    //ALGORITMA
    //INPUT ARRAY 3D
    for (int baris = 0; baris < jumbaris; baris++){
        for (int kolom = 0; kolom < jumkolom; kolom++){
             for (int dalam = 0; dalam < jumdalam; dalam++){
                    cout << "Input nilai baris ke-";
                    cout << baris << " kolom ke-";
                    cout << kolom << " kedalaman ke-";
                    cout << dalam << " = ";
                    cin >> X[baris][kolom][dalam];
            }
            cout << endl;
        }
        cout << endl;
    }

    //MENCETAK ARRAY 3D
    cout << "=== OUTPUT ARRAY 3D ===" << endl;
    for (int dalam = 0; dalam < jumdalam; dalam++){
        for (int baris = 0; baris < jumbaris; baris++){
            for (int kolom = 0; kolom < jumkolom; kolom++){
                    cout << X[baris][kolom][dalam];
                    cout << "\t";
                }
                cout << endl;
            }
        cout << endl;
    }
    return 0;
}

