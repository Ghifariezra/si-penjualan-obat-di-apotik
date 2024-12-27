#include <iostream>
using namespace std;

int main()
{
    int n, *pn;
    n = 44;
    // inisialisasi pointer pn dengan alamat address n
    pn = &n;

    // menampilkan isi variabel n
    cout << endl;
    cout << "Alamat variabel [n] = " << *pn << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    cin.get();
}
