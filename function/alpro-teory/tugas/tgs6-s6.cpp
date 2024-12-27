#include <iostream>
using namespace std;

void Contoh(int val, int &ref)
{
    val++;
    ref++;
    cout << " Nilai by value    : " << val << endl;
    cout << " Nilai by reference: " << ref << endl;
}

int main()
{
    int v = 10, r = 20;
    Contoh(v, r);
    cout << " Nilai by value    : " << v << endl;
    cout << " Nilai by reference: " << r << endl;
    cin.get();
}
