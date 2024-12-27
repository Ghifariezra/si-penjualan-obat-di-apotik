#include <iostream>
using namespace std;

int fib(int x) {
    if ((x == 1) || (x == 0)) {
        return (x);
    } else {
		return (fib(x - 1) + fib(x - 2));
    }
}

int main() {
    int x, i = 0;

    cout << "Masukkan jumlah deret Fibonacci : ";
    cin >> x;
    cout << "\nDeret Fibonacci : " << endl;

    while (i < x) {
        cout << " " << fib(i);
        i++;
    }

    cin.get();
}
