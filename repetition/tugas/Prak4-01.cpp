#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string prodi = "Universitas Pancasila Fakultas Teknik Jurusan Teknik Informatika";
	int amountRepetition = 1;
	
	// While Loop
	while(amountRepetition <= 25){
		
		cout << amountRepetition << ". " << prodi << endl;
		
		amountRepetition++;
	};
	
	cin.get();
}