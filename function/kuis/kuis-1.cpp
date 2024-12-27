#include <iostream>
using namespace std;

int JUMLAH(int a, int b);
int PENGURANGAN(int a, int b);
int PERKALIAN(int a, int b);
float PEMBAGIAN(float a, float b);
int MODULUS(int a, int b);

int main(){
	cout << "Hasil Penjumlahan = " << JUMLAH(28000, 1500);
	cout << "Hasil Pengurangan = " << PENGURANGAN(28000, 1500);
	cout << "Hasil Perkalian = " << PERKALIAN(28000, 1500);
	cout << "Hasil Pembagian = " << PEMBAGIAN(28000, 1500);
	cout << "Hasil Modulus = " << MODULUS(28000, 1500);
	cin.get();
}

int JUMLAH(int a, int b){
	cout << endl;
	return(a + b);
}

int PENGURANGAN(int a, int b){
	cout << endl;
	return(a - b);
}

int PERKALIAN(int a, int b){
	cout << endl;
	return(a * b);
}

float PEMBAGIAN(float a, float b){
	cout << endl;
	return(a / b);
}

int MODULUS(int a, int b){
	cout << endl;
	return(a % b);
}