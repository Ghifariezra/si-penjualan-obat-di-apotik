#include <iostream>
using namespace std;

int main()
{
    int Nilai[3][6] = {{20, 7, 93, 4, 8, 92}, {29, 3, 90, 27, 2, 91}, {14, 11, 92, 2, 2, 94}};
    int i, j;
    cout << endl;
    cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
    cout << "         Dengan Ordo 3x6         " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << Nilai[i][j] << " ";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}
