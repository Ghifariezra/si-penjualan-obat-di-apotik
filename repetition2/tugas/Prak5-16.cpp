#include <iostream>
using namespace std;

int main() {
    int n = 1;
    for (int k = 1; k <= 2; k++) {
        for (int i = 1; i <= 3; i++) {
            n *= 2;
            cout << "n = " << n << endl;
        }
    }
    cin.get();
}