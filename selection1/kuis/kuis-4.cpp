#include <iostream>

using namespace std;

int main(){
	// Deklarasi Variable
	int GH_N, km;
	
	// Deskripsi
	cout << "Masukan Jarak	=	"; cin >> GH_N;
	cout << endl;
	
	km = GH_N * 1000;
	
	// Logic Statement
	if (km < 5000)
		cout << "ANDA TIDAK HARUS BAYYYYYYYYYYYYYYAAAAR !!!" << endl;
	else
		cout << "BAYYYYYYYYYYYYYYAAAAR !!!" << endl;
	
	cin.get();
	return 0;
}