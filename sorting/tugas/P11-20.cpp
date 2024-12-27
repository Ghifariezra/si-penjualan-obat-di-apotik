#include <iostream>
using namespace std;

// Fungsi untuk melakukan selection sort pada array
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
		
		// Ascending Selection
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar elemen
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    char data[100];
    int n;

    cout << "Masukkan jumlah huruf: ";
    cin >> n;

    cout << "Masukkan huruf-huruf (tanpa spasi): ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // Panggil fungsi selection sort
    selectionSort(data, n);

    // Tampilkan hasil
    cout << "Hasil pengurutan secara ascending: ";
    for (int i = 0; i < n; i++) {
        cout << data[i];
    }
    cout << endl;

    cin.get();
}