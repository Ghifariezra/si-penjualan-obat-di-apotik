#include <iostream>
using namespace std;

int main()
{
    const int GH_JumDt = 3;
    char GH_Letters[GH_JumDt] = {'G', 'H', 'I'};
    int GH_i;
    
    cout << endl;
    cout << "Menginput ARRAY/LARIK 1 Dimensi" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
	// GH_i = 0 terlebih dahulu untuk "ALGORITMA", sebelum "selama"
    for (GH_i = 0; GH_i < GH_JumDt; GH_i++)
    {
        cout << " Isi Elemen Ke-" << GH_i + 1 << " : " << GH_Letters[GH_i] << endl;
    }
    cin.get();
}

