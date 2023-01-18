/*PROGRAM GANJIL GENAP
Program untuk menentukan apakah bilnagan termasuk bilangan genap atau ganjil
Nama : Restu Lestari Mulianingrum
NI
*/

#include <iostream>

using namespace std;

int main()
{
//KAMUS
int bilangan;

//ALGORITMA
cout << "Masukkan bilangan : ";
cin >> bilangan;
if (bilangan % 2 == 0)
{
    cout << bilangan << " adalah bilangan genap";
}
else
{
    cout << bilangan << " adalah bilangan ganjil";
}
cout << endl << "Selesai Cek";
return 0;
}
