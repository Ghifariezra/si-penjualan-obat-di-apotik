#include <iostream>
#include <cmath>

using namespace std;

int main(){
	// Declare Variable
	int	nilai,
		indeks=0,
		jumlahTertinggi=0,
		jumlahMahasiswa=6,
		ipsTertinggi=0,
		ipsMinimal=75;
	
	// Do-While Loop
	do {
		// Untuk Melakukan Input Sesuai Dengan Jumlah Mahasiswa
		indeks++;
		
		/* 
			Data : 
				- 28 
				- 56 
				- 78 
				- 43 
				- 78 
				- 30
		*/
		cout << "Masukan nilai = "; cin >> nilai;
		
		// Mencari Nilai Tertinggi Yang Kurang Dari Minimal IPS (Indeks Prestasi Semester)
		if (nilai >= ipsMinimal){
			ipsTertinggi = nilai;
			jumlahTertinggi++;
		}
		
	}
	while(indeks < jumlahMahasiswa);
	
	// Output: Total Mahasiswa Yang Memiliki IPS Tertinggi.
	cout << ipsTertinggi << " " << jumlahTertinggi << " " << "Orang." << endl;
	
	cin.get();
}