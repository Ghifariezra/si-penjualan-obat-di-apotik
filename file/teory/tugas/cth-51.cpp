#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int bilangan;
    ifstream file_masukan("../data/Angka.DAT", ios::binary);

    // Membaca seluruh data
    cout << "Menampilkan Isi File Angka.DAT" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    file_masukan.read((char *)&bilangan, sizeof(int));
    while (file_masukan)
    {
        cout << bilangan << endl;
        file_masukan.read((char *)&bilangan, sizeof(int));
    }

    // Menutup file
    file_masukan.close();
}
