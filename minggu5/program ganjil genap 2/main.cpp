/*PROGRAM GANJIL GENAP
Program untuk menentukan apakah bilnagan termasuk bilangan genap atau ganjil
Nama : Restu Lestari Mulianingrum
NIM  : A11.2022.14668
Tanggal 12 Oktober 2022
*/

#include <iostream>


using namespace std;


int main()
{
//KAMUS
int bilangan;
string hasil;

//ALGORITMA
cout << "Masukkan bilangan : ";
cin >> bilangan;
hasil = (bilangan % 2 == 0)? "bilangan genap":"bilangan ganjil";
cout << bilangan << " adalah " << hasil;
cout << endl << "Cek Selesai";
return 0;
}
