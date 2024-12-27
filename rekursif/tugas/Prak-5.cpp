#include <iostream>
using namespace std;

// Fungsi rekursif untuk memeriksa apakah suatu bilangan adalah bilangan prima
bool isPrime(int n, int i = 2) {
    if (n <= 2) return (n == 2);          // 2 adalah bilangan prima, selain itu bukan
    if (n % i == 0) return false;          // Jika habis dibagi i, maka bukan prima
    if (i * i > n) return true;            // Jika tidak ada pembagi sampai sqrt(n), maka prima
    return isPrime(n, i + 1);              // Panggilan rekursif untuk memeriksa pembagi berikutnya
}

// Fungsi rekursif untuk mencetak bilangan prima hingga batas tertentu
void printPrimes(int n, int limit) {
    if (n > limit) return;                 // Basis rekursi: berhenti jika n melebihi limit
    if (isPrime(n)) cout << n << " ";      // Cetak jika n adalah bilangan prima
    printPrimes(n + 1, limit);             // Panggilan rekursif untuk bilangan berikutnya
}

int main() {
    int limit = 100;                       // Batas atas bilangan prima
    cout << "Bilangan prima dari 1 hingga " << limit << " adalah:\n";
    printPrimes(2, limit);                 // Cetak bilangan prima mulai dari 2
    cout << endl;
    return 0;
}
