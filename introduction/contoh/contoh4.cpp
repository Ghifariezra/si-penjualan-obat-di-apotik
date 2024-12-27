#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int A;
	float B;
	
	cout << endl;
	
	cout << "	Menampilkan A dan B	" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
	cout << endl;
	
	cout << "Masukan Nilai A = "; cin >> A;
	
	A = A + 22;
	B = sqrt(A);
	
	cout << endl;
	
	cout << "Nilai A adalah " << A << endl;
	cout << "Nilai B adalah " << B << endl;
	
	cin.get();
	
	
	return 0;
}