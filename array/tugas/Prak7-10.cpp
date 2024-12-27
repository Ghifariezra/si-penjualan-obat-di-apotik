#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen array: ";
    cin >> N;

    int array[N];
    cout << "Masukkan " << N << " elemen array:" << endl;

    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    // Inisialisasi bilangan terbesar
    int max = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "Bilangan terbesar dalam array adalah: " << max << endl;

    cin.get();
}