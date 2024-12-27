#include <iostream>

using namespace std;

int main(){
	// Declare Var
	float UAS, 
		UTS, 
		TUGAS,
		resultUAS,
		resultUTS,
		resultTGS,
		finalResult,
		KKM = 7.5;
	
	// Description
	cout << "Masukan Nilai UAS: "; cin >> UAS;
	cout << "Masukan Nilai UTS: "; cin >> UTS;
	cout << "Masukan Nilai TUGAS: "; cin >> TUGAS;
	
	// Calculate
	resultUAS = UAS * 5 / 100;
	resultUTS = UTS * 3 / 100;
	resultTGS = TUGAS * 2 / 100;
	finalResult = resultUAS + resultUTS + resultTGS;
	
	// Logic Statement
	if (finalResult > KKM){
		cout << "LULUS" << endl;
	}
	
	cin.get();
}