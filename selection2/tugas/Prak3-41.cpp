#include <iostream>

using namespace std;

int main(){
	// Declare Variable
	char letters;
	
	// Description
	cout << endl;
	cout << "	Konversi Nilai" << endl;
	cout << "========================" << endl;
	cout << "A = 1\nB = 2\nC = 3\nD = 4\nE = 5\nF = 6\nG = 7\nH = 8\nI = 9\nJ = 10" << endl;
	cout << endl;
	
	cout << "Masukan huruf yang sesuai = "; cin >> letters;
	
	// Switch Selection
	switch(letters){
		case 'A':
			cout << 1 << endl;
			break;
		case 'B':
			cout << 2 << endl;
			break;
		case 'C':
			cout << 3 << endl;
			break;
		case 'D':
			cout << 4 << endl;
			break;
		case 'E':
			cout << 5 << endl;
			break;
		case 'F':
			cout << 6 << endl;
			break;
		case 'G':
			cout << 7 << endl;
			break;
		case 'H':
			cout << 8 << endl;
			break;
		case 'I':
			cout << 9 << endl;
			break;
		case 'J':
			cout << 10 << endl;
			break;
		default:
			cout << "HURUF TIDAK VALID" << endl;
	};
	
	cin.get();
}