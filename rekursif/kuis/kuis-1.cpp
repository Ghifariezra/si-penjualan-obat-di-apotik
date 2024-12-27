// Faktorial - proses iterasi
#include <iostream>
using namespace std;

int main() {
    long int GH_N, GH_K, GH_FAK = 1;
    cout << endl;
    cout << "Menampilkan Rekursif - FAKTORIAL" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Masukkan Sebuah Bilangan = "; cin >> GH_N;
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    for (GH_K = 1; GH_K <= GH_N; GH_K++) {
        GH_FAK = GH_FAK * GH_K;
        cout << "Faktorial dari " << GH_K << "! adalah = " << GH_FAK << " Dengan step by step = " << GH_K - 1 << "! * " << GH_K << endl;
    }
    cin.get();
}
