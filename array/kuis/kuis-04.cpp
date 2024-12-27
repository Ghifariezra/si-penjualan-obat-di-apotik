#include <iostream>
using namespace std;

int main()
{
    int GH_JumDt, GH_i;
	string GH_Inputan;
	cout << "MASUKAN JUMLAH DATA = "; cin >> GH_JumDt;
	string GH_Nilai[GH_JumDt];

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "MENAMPILKAN ARRAY 1 DIMENSI" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	
    for (GH_i = 0; GH_i < GH_JumDt; GH_i++)
    {
        cout << "Masukan Profesi Ke - " << GH_i + 1 << " : "; cin >> GH_Inputan;
		GH_Nilai[GH_i] = {GH_Inputan};
    }
	
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "TAMPILAN DATA PROFESI"<< endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;	
	
	for (GH_i = 0; GH_i < GH_JumDt; GH_i++)
    {
		cout << "PROFESI KE - " << GH_i + 1 << " : " << GH_Nilai[GH_i] << endl;
    }
	
    cin.get();
}

