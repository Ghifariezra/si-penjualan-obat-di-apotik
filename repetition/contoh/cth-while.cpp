#include <iostream>

using namespace std;

int main(){
	int N;
	N = 1;
	
	cout << endl;
	cout << "	MENAMPILKAN TULISAN 2 BARIS" << endl;
	cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	
	while(N <= 5){
		cout << "Yang Ke = " << N << endl;
		cout << "Selamat Datang" << endl;
		cout << "--MINGW--" << endl;
		cout << endl;
		N++;
	}
	
	cin.get();
	return 0;
}