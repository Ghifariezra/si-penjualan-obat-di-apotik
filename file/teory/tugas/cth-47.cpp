/* Program File */
/* Untuk merekam string ke file */

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    /* Definisi objek */
    ofstream file_keluaran;

    /* Membuka file */
    file_keluaran.open("../data/BIODTKU1.TXT");
    cout << "sedang merekam..... " << endl;
    file_keluaran << "Nama    : Ghifari Ezra Ramadhan " << endl;
    file_keluaran << "Alamat  : Jl. Merdeka 45 " << endl;
    file_keluaran << "NPM    : 4524210041 " << endl;
    file_keluaran << "JK      : Laki - Laki " << endl;
    file_keluaran << "Thn Msk : 2024 " << endl;

    /* Menutup file */
    file_keluaran.close();
}
