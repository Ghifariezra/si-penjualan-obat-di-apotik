#include <iostream>
using namespace std;

void coba(int *x)
{
    *x = 20;
}

int main()
{
    // variabel bukan pointer
    int y = 66;
    cout << "Nilai/Isi Variabel Y Awal  = " << y << endl;
    coba(&y);
    cout << "Nilai/Isi Variabel Y Akhir = " << y << endl;

    cin.get();
}
