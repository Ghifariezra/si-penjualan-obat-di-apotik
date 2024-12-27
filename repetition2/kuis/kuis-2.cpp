#include <iostream>
using namespace std;

int main()
{
    int Ghifar_Baris, Ghifar_Loop, Ghifar_Star;
	
    cout << "Masukan jumlah baris = "; cin >> Ghifar_Baris;
	
	for (Ghifar_Loop = Ghifar_Baris; Ghifar_Loop >= 1; Ghifar_Loop--){
		for (Ghifar_Star = Ghifar_Loop; Ghifar_Star > 1; Ghifar_Star--){
				cout << "*" << endl;
		}
		
	}
	
    cin.get();
}
