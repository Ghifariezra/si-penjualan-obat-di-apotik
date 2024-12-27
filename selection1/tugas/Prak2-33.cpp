#include <iostream>

using namespace std;

int main(){
	// Declare Var
	int totalBelanja,
		qtyKonsumen,
		hargaBarang = 5000,
		minBelanja = 100000;
	
	// Description
	cout << endl;
	cout << "Jumlah barang yang ingin di beli: "; cin >> qtyKonsumen;
	cout << endl;
	
	// Calculate
	totalBelanja = qtyKonsumen * hargaBarang;
	
	// Logic Statement
	if (totalBelanja < minBelanja){
		cout << "Tidak Mendapatkan DISKON" << endl;
	} else {
		cout << "Mendapatkan DISKON" << endl;
	}
	
	cin.get();
	cout << endl;
}