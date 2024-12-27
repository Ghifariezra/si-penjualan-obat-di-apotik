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
    file_keluaran.open("../data/BIODTKU1.TXT", ios::app);
    cout << "sedang merekam..... " << endl;
    file_keluaran << "Goldar    : O " << endl;
    file_keluaran << "Status  : Lajang " << endl;
    file_keluaran << "Agama    : Islam " << endl;
    file_keluaran << "Hobby      : Tenis Meja " << endl;

    /* Menutup file */
    file_keluaran.close();
}
