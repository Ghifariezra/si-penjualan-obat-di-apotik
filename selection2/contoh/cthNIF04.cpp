#include <iostream>

using namespace std;

int main(){
	// Declare Var
	int N;
	
	// Description
	cout << endl;
	cout << "	Menampilkan Angka 1 s.d 7	"<< endl;
	cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~	"<< endl;
	cout << endl;
	
	cout << "Memasukan angka [1/2/3/4/5/6/7] = "; cin >> N;
	
	// Case Statement
	switch(N){
		// Selection Value
		case 1: 
			// Process or Output
			cout << "SATU" << endl;
			break;
		case 2: 
			cout << "DUA" << endl;
			break;
		case 3: 
			cout << "TIGA" << endl;
			break;
		case 4: 
			cout << "EMPAT" << endl;
			break;
		case 5: 
			cout << "LIMA" << endl;
			break;
		case 6: 
			cout << "ENAM" << endl;
			break;
		case 7: 
			cout << "TUJUH" << endl;
			break;
		default:
			cout << "ANGKA TIDAK VALID" << endl;
	}

	cin.get();
	return 0;
}