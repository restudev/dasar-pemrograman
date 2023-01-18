#include<iostream>
#include<math.h>
using namespace std;
int main()

{
    cout << "======================== PROGRAM JUMLAH & RERATA BILANGAN GANJIL GENAP ========================" << endl;
    cout << "{program untuk mencetak jumlah bilangan ganjil & genap serta rata-rata bilangan ganjil & genap}" << endl;
    cout << "Nama    : Restu Lestari Mulianingrum" << endl;
    cout << "NIM     : A11.2022.14668" << endl;
    cout << "Tanggal : 25 November 2022" << endl;

    //KAMUS
    int x,y, i;
    int sumgenap = 0;
    int sumganjil = 0;
    float bykgenap, bykganjil;


    //ALGORITMA=
    cout << "======================================= MASUKKAN INPUTAN ======================================="<< endl;
    cout << "Input Awalan (x) :  ";
    cin >> x;
    cout << "Input Akhiran (y) :  ";
    cin >> y;

    cout << "==================================== DAFTAR BILANGAN GENAP =====================================" << endl;
    for (i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " , ";
            sumgenap += i;
            bykgenap = bykgenap+1;
        }
    }
    cout << endl << "================================================================================================" << endl;
    cout << "Jumlah deret bilangan genap: " << sumgenap << endl;
    cout << "Rata-rata deret genap: " << sumgenap/bykgenap << endl;

    cout << "==================================== DAFTAR BILANGAN GANJIL ====================================" << endl;
    for (i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " , ";
            sumganjil += i;
            bykganjil = bykganjil+1;
        }
    }
    cout << endl << "================================================================================================" << endl;
    cout << "Jumlah deret bilangan ganjil: " << sumganjil << endl;
    cout << "Rata-rata deret ganjil: " << sumganjil/bykganjil << endl;
    return 0;
}
