#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    float berat, tinggi, bmi;

    //ASLGORITMA

    cout << "PROGRAM MENGHITUNG BMI INDEX" << endl;
    cout << "=============================" << endl;
    cout << "Berat badan Anda (kg) = ";
    cin >> berat;
    cout << "Tinggi Badan Anda (m) = ";
    cin >> tinggi;
    bmi = berat / (tinggi*tinggi);
    cout << "Nilai BMI Anda = " << bmi << endl;
    if (tinggi > 0 && berat > 0){
        if (bmi < 18.5){
            cout << "Anda Termasuk kategori = Kurus";
        }
        else if (bmi >= 18.5 && bmi < 25){
            cout << "Anda Termasuk kategori = Normal atau Ideal";
        }
        else if (bmi >= 25 && bmi < 30){
            cout << "Anda Termasuk kategori = Kelebihan Berat Badan";
        }
        else if (bmi >= 30){
            cout << "Anda Termasuk kategori = Kegemukan";
        }
        else {
            cout << "Inputan Salah!";
        }
    }
    else {
        cout << "Inputan Salah!";
    }


    return 0;
}
