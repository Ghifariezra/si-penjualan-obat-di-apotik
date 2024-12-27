#include <iostream>

using namespace std;

int main(){
	// Deklarasi Variable
	int GH_N, total, result, diskon;
	
	// Deskripsi
	cout << "Mau beli berapa	=	"; cin >> GH_N;
	cout << endl;
	
	total = GH_N * 1000;
	
	// Logic Statement
	if (total >= 50000)
		diskon = total * 20 / 100;
		result = total - diskon;
		cout << "Diskon: Rp."<< diskon << endl;
		cout << "Total: Rp."<< result << endl;
	
	cin.get();
	return 0;
}