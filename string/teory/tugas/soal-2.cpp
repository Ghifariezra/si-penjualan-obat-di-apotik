#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main() {
    char nama01[] = "Ghifari Ganteng";
    int i, j;

    cout << " Merubah String " << endl;
    cout << " ~~~~~~~~~~~~~~ " << endl;
    cout << endl;

    cout << " Tulisan Asli       : " << nama01 << endl;
    cout << endl;

    for (j = 0; nama01[j]; j++) {
        nama01[j] = tolower(nama01[j]);
    }
    cout << " Hasil Tulisan TOLOWER : " << nama01 << endl;

    for (i = 0; nama01[i]; i++) {
        nama01[i] = toupper(nama01[i]);
    }
    cout << " Hasil Tulisan TOUPPER : " << nama01 << endl;

    if (islower(nama01[0])) {
        cout << " Huruf Kecil " << endl;
    } else {
        cout << " Huruf Besar " << endl;
    }

    cin.get();
}
