#include <iostream>
using namespace std;

int main() {
    int Nilai[10][10], jumlah;
    int i, j, ic, jc;

    cout << endl;
    cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
    cout << "Menentukan Besar Baris dan Kolom" << endl;
    cout << "Masukkan Jumlah Baris = "; cin >> ic;
    cout << "Masukkan Jumlah Kolom = "; cin >> jc;

    cout << endl;
    cout << "Menginput Isi Elemen Array" << endl;
    for (i = 0; i < ic; i++) {
        for (j = 0; j < jc; j++) {
            cout << "Masukkan Isi Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> Nilai[i][j];
        }
    }

    cout << endl;
    cout << "Tampilan Isi Elemen Array" << endl;
    for (i = 0; i < ic; i++) {
        for (j = 0; j < jc; j++) {
            cout << Nilai[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Menjumlah Isi elemen Array" << endl;
    for (j = 0; j < jc; j++) {
        jumlah = 0;
        for (i = 0; i < ic; i++) {
            jumlah += Nilai[i][j];
        }
        cout << "Jumlah Kolom [" << j + 1 << "] adalah " << jumlah << endl;
    }

    cin.get();
    return 0;
}