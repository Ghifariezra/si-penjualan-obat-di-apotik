#include <iostream>
using namespace std;

int main()
{
    int Ghifar_K, Ghifar_I, Ghifar_N;
    cout << endl;
    cout << "Menampilkan Pengulangan 4X(k) dan 6X(i)" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    Ghifar_N = 0;
	
    for (Ghifar_K = 1; Ghifar_K <= 4; Ghifar_K++)
    {
		//cout << "Loop Luar Ke = " << Ghifar_K<< endl;
        
		for (Ghifar_I = Ghifar_K; Ghifar_I <= 6; Ghifar_I++)
        {
            //cout << "Loop Dalem Ke = " << Ghifar_I << endl;
			
			Ghifar_N = Ghifar_N + 5;
			
			cout << "Nilai Akhir dari N adalah " << Ghifar_N << endl;
        }
    }
    cin.get();
}
