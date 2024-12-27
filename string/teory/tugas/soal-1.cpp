#include <iostream>
using namespace std;

int main() {
    char nama01[] = "Ghifari Ganteng";
    char nama02[30];
    int i;

    cout << " Menyalin String " << endl;
    cout << " ~~~~~~~~~~~~~~ " << endl;

    for (i = 0; nama01[i]; i++) {
        nama02[i] = nama01[i];
    }
    nama02[i] = '\0';
	
    cout << " Tulisan Asli : " << nama01 << endl;
    cout << " Tulisan Hasil Salinan : " << nama02 << endl;

    cin.get();
}
