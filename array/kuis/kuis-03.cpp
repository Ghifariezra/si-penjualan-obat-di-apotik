#include <iostream>
using namespace std;

int main()
{
    int GH_JumDt, GH_i, GH_Inputan;
	cout << "MASUKAN JUMLAH DATA = "; cin >> GH_JumDt;
	int GH_Nilai[GH_JumDt];

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "MENAMPILKAN ARRAY 1 DIMENSI" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
    for (GH_i = 0; GH_i < GH_JumDt; GH_i++)
    {
        cout << "Isi Elemen Ke-" << GH_i + 1 << " : "; cin >> GH_Inputan;
		GH_Nilai[GH_i] = {GH_Inputan};
    }
	
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "TAMPILAN ISI ELEMENT"<< endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;	
	
	for (GH_i = 0; GH_i < GH_JumDt; GH_i++)
    {
		cout << "Isi Elemen Ke-" << GH_i + 1 << " : " << GH_Nilai[GH_i] << endl;
    }
	
    cin.get();
}

