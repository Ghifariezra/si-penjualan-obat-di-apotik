#include <iostream>

using namespace std;

int main(){
	// Initialize
	const float valueConst = 0.5;
	int alas = 5, tinggi = 7, luas;
	
	// Process
	luas = valueConst * alas * tinggi;
	
	// Ouput
	cout << "Alas Segitiga: " << alas << endl;
	cout << "Tinggi Segitiga: " << tinggi << endl;
	cout << "Luas Segitiga: " << luas << endl;
	
	cin.get();
}