/*
PROGRAM CETAK BILANGAN POSITIF RANGE
NOTASI 5 => BERDASAR PENCACAH (i traversal)
Nama : Restu Lestari Mulianingrum
NIM : A11.2022.14668
Tanggal : 23 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int i, n, bil, sum=0;

    //ALGORITMA
    cout << "Input berapa kali bilangan : ";
    cin >> n;
    for (i = 1; i <= n; i++){
        cout << "Input bilangan ke-" << i << ": ";
        cin >> bil;
        sum += bil; //sum = sum + bil

    }
    cout << "Jumlah deret bilangan : " << sum << endl;
    cout << "Rata-rata deret adalah : " << sum/n << endl;
    return 0;
}
/*
awal 1 (x) akhiran 100 (y)
output :
jumlah bilangan genap 1-100
rata-rata bilangan genap 1-100
jumlah bilangan ganjil 1-100
rata-rata bilangan ganjil 1-100
*/

