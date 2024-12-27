#include <iostream>
using namespace std;

int main() {
    int n = 10;  // Jumlah baris atas (setengah pola)
    
    // Bagian atas pola (segitiga atas)
    for (int i = 1; i <= n; i++) {
        // Cetak spasi
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Cetak bintang
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bagian bawah pola (segitiga bawah)
    for (int i = n - 1; i >= 1; i--) {
        // Cetak spasi
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // Cetak bintang
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
