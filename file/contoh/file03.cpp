#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int angka[] = {22, 7, 66};
    // Mendefinisikan Objek
    ofstream file_keluaran;

    // Membuka FILE
    file_keluaran.open("Angka.DAT", ios::binary);
    cout << "sedang merekam............" << endl;
    for (int i = 0; i < (sizeof(angka)/sizeof(int)); i++)
        file_keluaran.write((char*)&angka[i], sizeof(int));

    // Menutup file
    file_keluaran.close();
}
