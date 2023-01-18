/*
PROGRAM CETAK BILANGAN POSITIF RANGE
NOTASI 5 => BERDASAR PENCACAH (i traversal)
Nama : Restu Lestari Mulianingrum
NIM : A11.2022.14668
Tanggal : 25 November 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n, i;
/*
    //ALGORITMA
    cout << "Input range batas bil. genap : ";
    cin >> n;
    for (i = 0; i <= n; i+=2){
        cout << i << endl;
    }
    cout << "selesai" << endl;
    return 0;
}
*/
/*
    //ALGORITMA
    cout << "Input range batas bil. genap : ";
    cin >> n;
    for (i = 0; i <= n; i+=2){
        if (i == 0){
            continue;
        }
    }
    cout << "selesai" << endl;
    return 0;
}
*/
    //ALGORITMA
    cout << "Input range batas bil. genap : ";
    cin >> n;
    for (i = 0; i <= n; i++){
        if (i % 2 == 0){
                if (i == 0)
                continue;
            cout << i << endl;
        }
    }
    cout << "selesai" << endl;
    return 0;
}
