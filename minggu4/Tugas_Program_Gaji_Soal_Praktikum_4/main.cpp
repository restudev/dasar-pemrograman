/*
PROGRAM GAJI
Ket     : Program untuk menghitung upah yang diterima per minggu
Nama    : Restu Lestari Mulianingrum
NIM     : A11.2022.14668
Tanggal : 5 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
//KAMUS
    int jam_kerja;
    int jam_lembur;
    int upah_kerja_per_jam = 150000;
    int upah_lembur = 100000;
    int total_upah_kerja;

//ALGORITMA
    cout << "Masukkan jumlah jam kerja (mingguan) : ";
    cin >> jam_kerja;
    total_upah_kerja = jam_kerja * upah_kerja_per_jam;
    if (jam_kerja > 48)
    {
        jam_lembur = (jam_kerja - 48);
        upah_lembur = (jam_lembur * upah_lembur);
        jam_kerja = (jam_kerja - jam_lembur);
        total_upah_kerja = (jam_kerja * upah_kerja_per_jam) + (upah_lembur);
    }
    cout << "Upah yang diterima mingguan : " << total_upah_kerja << endl;
    return 0;
}

