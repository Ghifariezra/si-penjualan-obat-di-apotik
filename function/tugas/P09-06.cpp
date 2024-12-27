#include <iostream>

using namespace std;

// Fungsi untuk mengubah sudut derajat menjadi sudut radian
float opmat06(float derajat) {
	float PI = 3.14159265358979323846;
    return derajat * (PI / 180.0);
}

int main() {
    float derajat;
    cout << "Masukkan sudut dalam derajat: "; cin >> derajat;
    
	float radian = opmat06(derajat);
    cout << "Sudut dalam radian: " << radian << endl;
    
	cin.get();
}