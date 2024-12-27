#include <iostream>
using namespace std;

int main()
{
	cout << endl;
	cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
    cout << "         Dengan Ordo 3x6         " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    
	int baris, 
		kolom,
		i, 
		j;
	
	cout << "Masukan Jumlah Baris = ";
	cin >> baris;
	
	cout << "Masukan Jumlah Kolom = ";
	cin >> kolom;
	
	int Nilai[baris][kolom];
	
	// Memasukkan nilai elemen
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan Isi Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> Nilai[i][j];
        }
    }

    // Menampilkan array
    cout << "Array yang telah Anda masukkan:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << Nilai[i][j] << " ";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}
