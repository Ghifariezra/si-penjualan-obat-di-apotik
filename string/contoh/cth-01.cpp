#include <iostream>
using namespace std;

int main(){
	char nama[] = "Ghifari";
	
	cout << "Tulisannya adalah = " << nama << endl;
	cout << endl;
	
	cout << "Karakter pertama di ganti dengan -R-" << endl;
	nama[0] = 'R';
	
	cout << "Menjadi = " << nama << endl;
	
	cin.get();
}