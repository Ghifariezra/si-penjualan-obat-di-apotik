#include <iostream>
#include <string>

using namespace std;

// Function untuk menghitung total barang dan total bayar
int hitungTotal(int harga, int jumlahBarang) {
    return (harga * jumlahBarang);
}

// Function untuk menampilkan struk
void tampilkanStruk(string nama, string alamat, string telephone, string barang, int jumlahBarang) {
	string header = string(50, '~');
	string spaceHeaderInput = string(15, ' ');
	string spaceHeaderPenjualan = string(4, ' ');
	
	// RESULT INPUT DATA
	string *namaPelanggan = &nama,
		   *alamatPelanggan = &alamat,
		   *telephonePelanggan = &telephone,
		   *namaBarang = &barang;
	
	int hargaBarang = 25000,
		qtyBarang = 8,
		*jmlBarang = &jumlahBarang,
		totalHarga;
	
	// HEADER INPUT DATA
	cout << header << endl;
	cout << spaceHeaderInput << "PENJUALAN TOKO BAGUS" << spaceHeaderInput << endl;
	cout << header << endl;
	cout << endl;
	
	// DATA USER
	cout << "Nama Pelanggan			: " << *namaPelanggan << endl;
	cout << "Alamat Pelanggan		: " << *alamatPelanggan << endl;
	cout << "Telephone Pelanggan		: " << *telephonePelanggan << endl;
	cout << endl;
	cout << "Barang Yang Dibeli		: " << endl;
	
	// HEADER DATA PENJUALAN
	cout << header << endl;
	cout << "No" << spaceHeaderPenjualan << "Kode" << spaceHeaderPenjualan << "Nama" << spaceHeaderPenjualan << "Harga" << spaceHeaderPenjualan << "Quantity" << spaceHeaderPenjualan << "Jumlah" << spaceHeaderPenjualan << endl;
	cout << header << endl;
	cout << "1." << spaceHeaderPenjualan << "Q-1" << spaceHeaderPenjualan << *namaBarang << spaceHeaderPenjualan << hargaBarang << spaceHeaderPenjualan << qtyBarang << spaceHeaderPenjualan  << *jmlBarang << spaceHeaderPenjualan << endl;
	cout << header << endl;
	cout << endl;
	
	// Total Penjualan
	totalHarga = hitungTotal(hargaBarang, *jmlBarang);
	cout << "Jumlah Barang Yang Dibeli	= " << *jmlBarang << endl;
	cout << "Total Bayar			= " << totalHarga << endl;
	cout << header << endl;
	cout << endl;
}


int main() {
	string nama, alamat, telephone, barang;
	int jmlBarang;
	
	// Input User
	cout << "Masukan Nama Pelanggan: "; 
	getline(cin, nama);
	cout << "Masukan Alamat Pelanggan: ";
	getline(cin, alamat);
	cout << "Masukan Telephone Pelanggan: "; 
	getline(cin, telephone);
	cout << "Masukan Nama Barang: "; 
	getline(cin, barang);
	cout << "Masukan Jumlah Barang: "; 
	cin >> jmlBarang;
	
	tampilkanStruk(nama, alamat, telephone, barang, jmlBarang);
	cin.get();
}