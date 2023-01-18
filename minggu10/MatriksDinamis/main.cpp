/*
PROGRAM NESTEDLOOP MATRIKS DINAMIS
{program untuk menampilkan matriks b x k sejumlah inputan}
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.1468
Tanggal : 30 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int b, k, n;
    int kolom, baris;

    //ALGORITMA
/*
    //WHILE-FOR
    b = 1;
    cout << "inputkan nilai : ";
    cin >> n;
    cout << "inputkan jumlah kolom : ";
    cin >> kolom;
    cout << "inputkan jumlah baris : ";
    cin >> baris;

    while (b <= baris){
        for (k=1; k <= kolom; k++){
            cout << n << " ";
            n++;
        }
        b++;
        cout << endl;
    }
}
*/

/*
    //FOR-WHILE
    cout << "inputkan nilai : ";
    cin >> n;
    cout << "inputkan jumlah kolom : ";
    cin >> kolom;
    cout << "inputkan jumlah baris : ";
    cin >> baris;
    b=1;
    for (b=1; b <= baris; b++){
        k=1;
        while (k <= kolom){
            k++;
            cout << n << " ";
            n++;
        }

        cout << endl;
    }
}
*/


    //DOWHILE-WHILE
    b = 1;
    cout << "inputkan nilai : ";
    cin >> n;
    cout << "inputkan jumlah kolom : ";
    cin >> kolom;
    cout << "inputkan jumlah baris : ";
    cin >> baris;

    do {
		k=1;
		while (k <= kolom){
			k++;
            cout << n << " ";
            n++;
        }
        b++;
        cout << endl;
    }
    while (b <= baris);
}

/*
//WHILE-DOWHILE
    b = 1;
    cout << "inputkan nilai : ";
    cin >> n;
    cout << "inputkan jumlah kolom : ";
    cin >> kolom;
    cout << "inputkan jumlah baris : ";
    cin >> baris;

    while (b <= baris){
        b++;
        k=1;
        do {
            k++;
        cout << n << "  ";
        n++;
        }
        while(k <= kolom);
        cout << endl;
    }
    return 0;
}
*/
