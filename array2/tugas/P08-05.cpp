#include <iostream>
using namespace std;

int main()
{
    int Nilai[4][5];
    int i, j;

    cout << endl;
    cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
    cout << " Dengan Ordo 4x5 Melalui Inputan " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << "Masukan angka pada baris ke " << i << " kolom ke " << j << " : ";
            cin >> Nilai[i][j];
        }
		cout << endl;
    }

    cout << endl;
    cout << "Tampilan Isi Elemen" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << Nilai[i][j] << " ";
        }
        cout << endl;
    }

    cin.get();
}
