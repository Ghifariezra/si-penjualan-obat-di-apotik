#include <iostream>
using namespace std;

void Percobaan2()
{
    static int X = 22;
    int Y = 66;
    cout << endl;
    X++;
    Y++;
    cout << " Nilai X untuk variabel Statis = " << X << endl;
    cout << " Nilai Y untuk variabel Bukan Statis = " << Y << endl;
    cout << endl;
}

int main()
{
    Percobaan2();
    cout << endl;
    Percobaan2(); Percobaan2(); Percobaan2();
    cout << endl;
    cin.get();
}
