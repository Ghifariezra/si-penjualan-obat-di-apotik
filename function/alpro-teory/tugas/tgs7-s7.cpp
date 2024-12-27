// Faktorial - proses iterasi
#include <iostream>
using namespace std;

int faktorialGhifari(int bilangan){
	long int GH_K, GH_FAK = 1;
	
	for (GH_K = 1; GH_K <= bilangan; GH_K++) {
        GH_FAK = GH_FAK * GH_K;
        cout << GH_K << "! = " << GH_FAK << endl;
    }
	
	cout << "Faktorial dari " << bilangan << " atau " << bilangan << "!" << " adalah : " << GH_FAK << endl;
}

int main() {
    long int GH_N;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Masukkan Sebuah Bilangan = "; cin >> GH_N;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    faktorialGhifari(GH_N);
	cin.get();
}
