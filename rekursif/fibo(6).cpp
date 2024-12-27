#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Cetak proses tracking rekursif
    cout << "fibo(" << n << ")" << endl;

    // Kondisi dasar untuk menghentikan rekursi
    if (n <= 1) {
        return n;
    }

    // Rekursi: fibo(n) = fibo(n-1) + fibo(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n1 = 6, n2 = 8;

    cout << "Tracing Fibonacci untuk fibo(" << n1 << "):" << endl;
    int result1 = fibonacci(n1);
    cout << "Hasil fibo(" << n1 << ") = " << result1 << endl;

    cout << "\nTracing Fibonacci untuk fibo(" << n2 << "):" << endl;
    int result2 = fibonacci(n2);
    cout << "Hasil fibo(" << n2 << ") = " << result2 << endl;

    return 0;
}
