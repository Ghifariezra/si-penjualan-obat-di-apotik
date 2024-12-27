#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream nilaiFile("NILAI.TXT");
    if (nilaiFile.is_open()) {
        nilaiFile << "Komposisi Nilai\n";
        nilaiFile << "Nilai A: 85 - 100\n";
        nilaiFile << "Nilai A-: 80 - 85\n";
        nilaiFile << "Nilai B+: 76 - 80\n";
        nilaiFile << "Nilai B: 72 - 76\n";
        nilaiFile << "Nilai B-: 68 - 72\n";
        nilaiFile << "Nilai C+: 64 - 68\n";
        nilaiFile << "Nilai C: 56 - 64\n";
        nilaiFile << "Nilai D: 45 - 56\n";
        nilaiFile << "Nilai E: 30 - 45\n";
        nilaiFile << "Nilai F: 0 - 30\n";
        nilaiFile.close();
        cout << "Data berhasil ditulis ke file NILAI.TXT\n";
    } else {
        cout << "Tidak dapat membuka file\n";
    }
	cin.get();
}