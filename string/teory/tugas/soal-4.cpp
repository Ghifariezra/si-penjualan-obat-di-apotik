#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

void GANTINAMAKU(char nama_asli[]) {
	nama_asli[1] = 'F'; // Ganti karakter pada sebuah string.
	
	cout << "Tampilkan Nama Baru" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nama Baru = " << nama_asli << endl;
	cout << endl;
}

void COPYNAMA(char nama_asli[]) {
	char nama_copy[25]; // Membuat variable kosong sebagai tempat untuk mencopy dari variable lain.
	int i;
	
	nama_asli[1] = 'F'; // Ganti karakter pada sebuah string.
	
	strcpy(nama_copy, nama_asli); // Menyalin dari variable "nama_asli" --> "nama_copy".
	
	// Mengubah satu per satu huruf menjadi huruf besar.
	for (i = 0; nama_copy[i]; i++){
		nama_copy[i] = toupper(nama_copy[i]);
	}
	
	cout << "Tampilkan Nama Baru" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nama Upper Case = " << nama_copy << endl;
	cout << endl;
	
	
}

int main() {
    char nama[] = "Ghifari Ezra Ramadhan";
	
	cout << "Tampilkan Nama Asli" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nama Asli = " << nama << endl;
	cout << endl;
	
	GANTINAMAKU(nama);
	COPYNAMA(nama);
	
    cin.get();
}