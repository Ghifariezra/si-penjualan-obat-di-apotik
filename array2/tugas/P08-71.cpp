#include <iostream>
using namespace std;

int main()
{
    int Nilai[5][5];
    int i, j;

    cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
    cout << "Dengan Ordo 5x5 Melalui Inputan" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Input nilai array 2 dimensi
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << "Masukkan Isi Elemen[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> Nilai[i][j];
        }
    }

    cout << endl;
    cout << "Tampilan Isi Elemen Berbentuk Segitiga" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Menampilkan segitiga normal dari tengah
    for (i = 0; i < 5; i++) // Iterasi setiap baris
    {
        // Tambahkan spasi di kiri untuk menempatkan elemen ke tengah
        for (j = 0; j < 4 - i; j++) 
        {
            cout << " "; // Spasi kosong untuk keseimbangan
        }

        // Cetak elemen array
        for (j = 0; j <= i; j++) 
        {
            cout << Nilai[i][j] << " ";
        }

        cout << endl;
    }

    cin.get();
}
