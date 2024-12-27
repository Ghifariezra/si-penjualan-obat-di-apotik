#include <iostream>
using namespace std;

int main()
{
    int i, j, maxIdx, temp;
    int A[5]; // Ukuran array 5
    
    // Input angka ke dalam array
    for (i = 0; i < 5; i++) {
        cout << "Masukkan angka: ";
        cin >> A[i];
    }
    cout << endl;

    // Proses pengurutan dengan selection sort
    for (i = 0; i < 5 - 1; i++) { // Iterasi dari indeks awal hingga sebelum elemen terakhir
        maxIdx = i; // Asumsikan elemen pertama dari bagian yang belum diurutkan adalah maksimum
        for (j = i + 1; j < 5; j++) {
            if (A[j] > A[maxIdx]) { // Cari elemen maksimum di bagian yang belum diurutkan
                maxIdx = j;
            }
        }
        // Tukar elemen maksimum dengan elemen pertama dari bagian yang belum diurutkan
        temp = A[i];
        A[i] = A[maxIdx];
        A[maxIdx] = temp;
    }

    // Menampilkan hasil setelah pengurutan
    cout << "Setelah Dilakukan Pengurutan" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    for (i = 0; i < 5; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}
