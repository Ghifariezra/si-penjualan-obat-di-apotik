#include <iostream>

using namespace std;

int main(){
	// Declare Variable
	int choice, height;
	
	// Description
	cout << endl;
	cout << "	Pilihan" << endl;
	cout << "========================" << endl;
	cout << "1. Laki - Laki" << endl;
	cout << "2. Perempuan" << endl;
	cout << endl;
	
	cout << "Pilih opsi yang sudah ditentukan [1 - 2] = "; cin >> choice;
	
	// Selection
	if (choice == 1){
		cout << endl;
		cout << "	Check tinggi badan." << endl;
		cout << "========================" << endl;
		cout << "Tinggi badan harus lebih dari 165" << endl;
		cout << endl;
		
		cout << "Masukan Tinggi Badan = "; cin >> height;
		
		if (height > 165){
			cout << "LULUS." << endl;
		} else{
			cout << "TIDAK LULUS." << endl;
		}
		
	} else{
		if (choice == 2){
			cout << endl;
			cout << "	Check tinggi badan." << endl;
			cout << "========================" << endl;
			cout << "Tinggi badan harus lebih dari 160" << endl;
			cout << endl;
			
			cout << "Masukan Tinggi Badan = "; cin >> height;
			
			if (height > 160){
				cout << "LULUS." << endl;
			} else{
				cout << "TIDAK LULUS." << endl;
			}
			
		} else {
			cout << "ANGKA TIDAK VALID." << endl;
		}
	}

	cin.get();
}