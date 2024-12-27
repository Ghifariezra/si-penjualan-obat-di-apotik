#include <iostream>
#include <cstring>
#define n 9
using namespace std;

int i, j, k, x;
int A[n] = {23, 17, 14, 6, 13, 10, 1, 5, 7}; // Array global

void Tampil1() {
    cout << "Sebelum Dilakukan Pengurutan" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    for(i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << endl;
}

void Tampil2() {
    cout << "Step By Step Dilakukan Pengurutan" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    k = 0;
    while (k <= n - 2) {
        j = k;
        i = k + 1;
        while (i <= n - 1) {
            if (A[i] > A[j]) {
                j = i;
            }
            i++;
        }
        x = A[j];
        A[j] = A[k];
        A[k] = x;
        k++;
        
        // Tampilkan array setelah setiap langkah
        for(int m = k; m < n; m++) {
            cout << A[m] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Tampil3() {
    cout << "Sesudah Dilakukan Pengurutan" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    for (i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    Tampil1();
    Tampil2();
    Tampil3();
    cout << endl;
    cin.get();
}
