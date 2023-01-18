#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char karakter;

    //ALGORITMA
    cout << "PROGRAM UNTUK MENENTUKAN HURUF ATAU BUKAN" << endl;
    cout << "==========================================" << endl;
    cout << "Input Karakter = ";
    cin >> karakter;
    if (karakter >= 'A' && karakter <= 'Z'){
        cout << karakter << " adalah huruf";
    }
    else if (karakter >= 'a' && karakter <= 'z'){
        cout << karakter << " adalah huruf";
    }
    else {
        cout << karakter << " adalah bukan huruf";
    }
    return 0;
}
