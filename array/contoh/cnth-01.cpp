#include <iostream>
using namespace std;

int main()
{
    const int GH_JumDt = 3;
    int GH_Nilai[GH_JumDt] = {22, 7, 1966};
    int GH_i, GH_Total = 0;
    
    cout << endl;
    cout << "Menginput ARRAY/LARIK 1 Dimensi" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
	// GH_i = 0 terlebih dahulu untuk "ALGORITMA", sebelum "selama"
    for (GH_i = 0; GH_i < GH_JumDt; GH_i++)
    {
        cout << " Isi Elemen Ke-" << GH_i + 1 << " : " << GH_Nilai[GH_i] << endl;
        GH_Total = GH_Total + GH_Nilai[GH_i];
    }
    
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Total dari Penjumlahan = " << GH_Total << endl;
    
    cin.get();
}
