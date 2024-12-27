#include <iostream>
using namespace std;

int A[10][10], B[10][10], C[10][10];
int iA, iB, jA, jB;

int main()
{
    int i, j, k;

    cout << endl;
    cout << " Menampilkan ARRAY/LARIK Multi Dimensi" << endl;
    cout << " Menentukan Besar Baris dan Kolom Matriks A" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Masukkan Jumlah Baris Matriks A = "; cin >> iA;
    cout << "Masukkan Jumlah Kolom Matriks A = "; cin >> jA;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "Masukkan Jumlah Baris Matriks B = "; cin >> iB;
    cout << "Masukkan Jumlah Kolom Matriks B = "; cin >> jB;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;

	cout << "Menginput Isi Elemen Array Matriks A" << endl;
	for (i = 0; i < iA; i++) {
		for (j = 0; j < jA; j++) {
			cout << "Masukkan Isi Elemen[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> A[i][j];
		}
	}
	cout << endl;

	cout << "Menginput Isi Elemen Array Matriks B" << endl;
	for (i = 0; i < iB; i++) {
		for (j = 0; j < jB; j++) {
			cout << "Masukkan Isi Elemen[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> B[i][j];
		}
	}
	cout << endl;

	cout << "Tampilan Isi Elemen Array Matriks A" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (i = 0; i < iA; i++) {
		for (j = 0; j < jA; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Tampilan Isi Elemen Array Matriks B" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (i = 0; i < iB; i++) {
		for (j = 0; j < jB; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	// Perkalian Matriks
	for (i = 0; i < iA; i++) {
		for (j = 0; j < jB; j++) {
			C[i][j] = 0;
			for (k = 0; k < jA; k++) {
				cout << A[i][k] << "x" << B[k][j] << " = " << C[i][j] << endl;
				C[i][j] += A[i][k] * B[k][j];
				cout << C[i][j] << endl; 
			}
		}
	}
	cout << "Tampilan Hasil Kali Dua Matriks " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (i = 0; i < iA; i++) {
		for (j = 0; j < jB; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

    cin.get();
}
