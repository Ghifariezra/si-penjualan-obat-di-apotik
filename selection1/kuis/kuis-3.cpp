#include <iostream>

using namespace std;

int main(){
	// Deklarasi Variable
	int GH_N;
	
	// Deskripsi
	cout << "Masukan Nilai	=	"; cin >> GH_N;
	cout << endl;
	
	// Logic Statement
	if (GH_N % 2 == 0)
		cout << "GENAP" << endl;
	else
		cout << "GANJIL" << endl;
	
	cin.get();
	return 0;
}