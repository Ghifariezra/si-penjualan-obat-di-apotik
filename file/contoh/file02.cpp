#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Mendeklarasi array sebagai penyangga
    const int MAKS = 80;
    char penyangga[MAKS + 1];

    ifstream file_masukan("BIODTKU1.TXT");

    // Membaca seluruh data
    while (file_masukan)
    {
        file_masukan.getline(penyangga, MAKS);
        cout << penyangga << endl;
    }

    // Menutup file
    file_masukan.close();
}
