#include <iostream>

using namespace std;

int main(){
	// Deklarasi Variable
	int GH_N, GH_P;
	
	// Deskripsi
	cout << "Masukan Nilai Bilangan Pembagian (N)	=	"; cin >> GH_N;
	cout << "Masukan Nilai Bilangan Pembagian (P)	=	"; cin >> GH_P;	
	cout << endl;
	
	// Logic Statement
	if (GH_N % GH_P == 0);
		cout << "Jawabannya adalah BENAR" << endl;
	
	cin.get();
	return 0;
}