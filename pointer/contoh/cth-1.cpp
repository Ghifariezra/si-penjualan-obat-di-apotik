#include <iostream>
using namespace std;

int main()
{
    int n = 44;
    
	//inisialisasi pointer pn dengan alamat address n
    int *pn = &n;
    
	//menampilkan alamat address n dan s
    cout << endl;
    cout << "Alamat Address [pn] = " << pn << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    
	//inisialisasi m dengan integer dan pn sebagai pointer
    int m = *pn;
	
    //menampilkan m dan t
    cout << "Isi variabel m = " << m << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cin.get();
}
