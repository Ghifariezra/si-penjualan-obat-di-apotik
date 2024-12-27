#include <iostream>
using namespace std;

int G_Ghifar(char grafik = '=', int loop = 10) {
    for (int i = 0; i < loop; i++) {
        cout << grafik; // Cetak simbol pertama (vertikal kiri)
        
        if (i == 0 || i == loop - 1) {
            // Baris pertama dan terakhir (garis horizontal penuh)
            for (int j = 1; j < loop - 1; j++) cout << grafik;
        } else if (i == loop / 2) {
            // Baris horizontal tengah dengan 3 simbol awal dihapus
            for (int j = 1; j < 3; j++) cout << " ";
            for (int j = 3; j < loop - 1; j++) cout << grafik;
        } else {
            // Bagian vertikal dengan tambahan sisi kanan di baris bawah
            for (int j = 1; j < loop - 1; j++) 
                if (j == loop - 2 && i > loop / 2) {
					cout << grafik; // Cetak simbol pada sisi kanan
				} else {
					cout << ' '; // Cetak spasi
				}
        }
        
        cout << endl; // Pindah ke baris berikutnya
    }
    return 0;
}

int main() {
    cout << "Huruf G:\n";
    G_Ghifar('*', 10); // Menggunakan simbol '*' dan ukuran 10
    cin.get();
}
