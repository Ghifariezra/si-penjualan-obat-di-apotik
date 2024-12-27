#include <iostream>
using namespace std;

int main()
{
    int Ghifar_Pos;
    cout << "Menampilkan Angka dari 50 s.d. -50" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
	
    for (Ghifar_Pos = 50; Ghifar_Pos >= -50; Ghifar_Pos -= 10)
        
		if (Ghifar_Pos == 0)
			cout << Ghifar_Pos << endl;
		else
			if (Ghifar_Pos > 0)
				cout << Ghifar_Pos << " Bilangan Positif" << endl;
			else
				cout << Ghifar_Pos << " Bilangan Negatif" << endl;
			
			
    cin.get();
}
