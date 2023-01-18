/*
PROGRAM NESTEDLOOP CETAK MATRIKS ANGKA
{program untuk menampilkan matriks b x k dengan ukuran 3 x 3 yang berisi 1-9}
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

    //ALGORITMA

 /*   //FOR-FOR_1
        n = 2;
        for (b = 1; b <= 3; b++) //outer loop
        {
           for (k = 1; k <= 3; k++) //inner loop
            {
                cout << n << " ";
                n+=2 ;
            }
            cout << endl;
        }
        return 0;
}
*/
        //FOR-FOR_2
        n = 1;
        for (b = 1; b <= 3; b++) //outer loop
        {
           for (k = 1; k <= 6; k++) //inner loop
            {
                if (n%2==0){
                    cout << n << " ";
                }
                n++;
            }
            cout << endl;
        }
        return 0;
}
