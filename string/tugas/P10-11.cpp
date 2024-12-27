#include <iostream>
#include <string.h>

using namespace std;

string encryptMessage(string message, int shift){
	/* 
		Declare Variable
	*/
	string resultMessage = "";
	char letters[message.length() + 1];
	char base;
	int i, totalAlphabet = 26;
	
	// Convert String to Array
	strcpy(letters, message.c_str());
	
	/* 
		Processing Data
		===============
	*/
		
	for (i = 0; i < message.length(); i++){
		
		// Checking character
		if (isalpha(letters[i])){
			/* 
				Memeriksa setiap karakternya huruf 'Kecil', 
				jika iya akan mengembalikan nilai 'a' dan sebaliknya akan mengembalikan nilai 'A'
			*/
			base = islower(letters[i]) ? 'a' : 'A';
			
			// Pergeseran menggunakan penjumlahan nilai ASCII setiap karakter
			letters[i] = (letters[i] - base + shift) % totalAlphabet + base;
		}
		// Setiap karakter akan di tampung ke dalam string kosong.
		resultMessage += letters[i];
	}
	
	return resultMessage;
}

int main(){
	string message;
	int shift;
	
	// Input Process
	cout << "Masukan pesan yang ingin anda enkripsi: ";
	getline(cin, message);
	
	cout << "Masukan jumlah pergeseran: ";
	cin >> shift;
	
	// Process Encryption
	message = encryptMessage(message, shift);
	
	cout << "Pesan yang telah di enkripsi: " << message << endl;
	
	
	cin.get();
}