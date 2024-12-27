#include <iostream>

using namespace std;

int main() {
	int A,B;
	
	cout << endl;
	cout << "	Menampilkan Nilai A & B		" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Masukan nilai A = "; cin >> A;
	cout << "Masukan nilai B = "; cin >> B;
	
	A = A + 2;
	B = B - 4;
	
	cout << endl;
	
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nilai A adalah = " << A << endl;
	cout << "Nilai B adalah = " << B << endl;
	
	cin.get();
    return 0;
}