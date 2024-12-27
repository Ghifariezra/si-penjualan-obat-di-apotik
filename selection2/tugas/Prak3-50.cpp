#include <iostream>
#include <cmath>

using namespace std;

int main(){
	// Declare Var
	char menuAwal;
	
	float resultSegiempat,
		  resultSegitiga,
		  diket = 0.5;
		  
	int subMenu,
		
		// Luas
		diagonal,
		t1,
		t2,
		jts,
		a,
		t,
		
		// Keliling
		sisi
		;
	
	// Description
	cout << "	Daftar MENU"<< endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << "A. Segiempat"<< endl;
	cout << "B. Segitiga"<< endl;
	cout << "C. Keluar Program"<< endl;
	
	cout << endl;
	
	cout << "Pilih menu yang anda inginkan [A/B/C] = "; cin >> menuAwal;
	
	cout << endl;
	
	// Nested Switch
	switch(menuAwal){
		// Selection Value
		case 'A': 
			// Process or Output
			cout << "	Program Segiempat" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			cout << "1. Luas Segiempat"<< endl;
			cout << "2. Keliling Segiempat"<< endl;
			cout << "3. Kembali Ke Manu Utama"<< endl;
			
			cout << endl;
			
			cout << "Pilih menu yang anda inginkan [1/2/3] = "; cin >> subMenu;
			
			cout << endl;
			
			// Nested Segiempat
			switch(subMenu){
				case 1:
					cout << "	Luas Segiempat" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					cout << "Masukan Nilai Diagonal = "; cin >> diagonal;
					cout << "Masukan Nilai Tinggi 1 = "; cin >> t1;
					cout << "Masukan Nilai Tinggi 2 = "; cin >> t2;
					
					jts = t1 + t2;
					resultSegiempat = ((diagonal * jts) / diket) / 10;
					
					cout << "Luas Segiempat adalah = " << round(resultSegiempat) << " cm" <<endl;
					
					break;
				case 2:
					cout << "	Keliling Segiempat" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					cout << "Masukan Nilai Sisi = "; cin >> sisi;
					
					resultSegiempat = (4 * sisi) / 10;
					
					cout << "Keliling Segiempat adalah = " << round(resultSegiempat) << " cm" <<endl;
					
					break;
				case 3:
					cout << "Kembali Ke Manu Utama" << endl;
					break;
				default:
					cout << "Masukan Angka Yang VALID." << endl;
			}
			break;
			
		case 'B': 
			// Process or Output
			cout << "	Program Segitiga" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			cout << "1. Luas Segitiga"<< endl;
			cout << "2. Keliling Segitiga"<< endl;
			cout << "3. Kembali Ke Manu Utama"<< endl;
			
			cout << endl;
			
			cout << "Pilih menu yang anda inginkan [1/2/3] = "; cin >> subMenu;
			
			cout << endl;
			
			// Nested Segitiga
			switch(subMenu){
				case 1:
					cout << "	Luas Segitiga" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					cout << "Masukan Nilai Alas = "; cin >> a;
					cout << "Masukan Nilai Tinggi = "; cin >> t;
					
					resultSegitiga = ((a * t) / diket) / 10;
					
					cout << "Luas Segitiga adalah = " << round(resultSegitiga) << " cm" <<endl;
					
					break;
				case 2:
					cout << "	Keliling Segitiga" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
					cout << "Masukan Nilai Sisi = "; cin >> sisi;
					
					resultSegitiga = (3 * sisi) / 10;
					
					cout << "Keliling Segitiga adalah = " << round(resultSegitiga) << " cm" <<endl;
					
					break;
				case 3:
					cout << "Kembali Ke Manu Utama" << endl;
					break;
				default:
					cout << "Masukan Angka Yang VALID." << endl;
			}
			break;
			
		case 'C': 
			cout << "Keluar dari Program." << endl;
			break;
		default:
			cout << "Masukan Opsi Yang VALID." << endl;
	}

	cin.get();
}