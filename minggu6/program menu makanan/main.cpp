/*PROGRAM MENU MAKANAN
{program untuk menginputkan kode makanan dan mengoutputkan jenis makanan yang dipesan}
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 14 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int kode_makanan;

    //ALGORITMA
    cout << "Masukkan kode makanan yang akan dipesan : ";
    cin >> kode_makanan;

    switch (kode_makanan) {
    case 1 :
        cout << "Anda memesan nasi goreng dengan harga Rp10.000";
        break;
    case 2 :
        cout << "Anda memesan nasi ayam dengan harga Rp15.000";
        break;
    case 3 :
        cout << "Anda memesan es teh dengan harga Rp5.000";
        break;
    case 4 :
        cout << "Anda memesan es jeruk dengan harga Rp5.500";
        break;
    default :
        cout << "Kode salah! silakan input kembali";
        break;
    }

    return kode_makanan;
}
