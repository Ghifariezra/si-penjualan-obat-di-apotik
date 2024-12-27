#include <iostream>
using namespace std;

// Fungsi dengan nama INISIALKUGHIFARI
void INISIALKUGHIFARI() {
    int n = 5; // Banyaknya baris pola
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Pindah ke baris berikutnya
    }
}

int main() {
    // Panggil fungsi INISIALKUGHIFARI
    INISIALKUGHIFARI();
}