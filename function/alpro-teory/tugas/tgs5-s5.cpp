#include <iostream>
using namespace std;

void Informatika4524210041(
	string nama,
	string alamat,
	string tanggalLahir,
	string tempatLahir,
	string hobby,
	string namaIbu,
	string namaAyah,
	int jumlahSaudara
){
	cout << endl;
	cout << "Nama: " << nama << endl;
	cout << "Alamat: " << alamat << endl;
	cout << "Tanggal Lahir: " << tanggalLahir << endl;
	cout << "Tempat Lahir: " << tempatLahir << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Nama Ibu: " << namaIbu << endl;
	cout << "Nama Ayah: " << namaAyah << endl;
	cout << "Jumlah Saudara: " << jumlahSaudara << endl;
}

int main()
{
	string nama,
		   alamat, 
		   tanggalLahir, 
		   tempatLahir, 
		   hobby, 
		   namaIbu, 
		   namaAyah;
	int jumlahSaudara;
	
	cout << "Masukan Nama: "; cin >> nama;
	cout << "Masukan Alamat: "; cin >> alamat;
	cout << "Masukan Tanggal Lahir: "; cin >> tanggalLahir;
	cout << "Masukan Tempat Lahir: "; cin >> tempatLahir;
	cout << "Masukan Hobby: "; cin >> hobby;
	cout << "Masukan Nama Ibu: "; cin >> namaIbu;
	cout << "Masukan Nama Ayah: "; cin >> namaAyah;
	cout << "Masukan Jumlah Saudara: "; cin >> jumlahSaudara;
	
	Informatika4524210041(
		nama,
		alamat,
		tanggalLahir,
		tempatLahir,
		hobby,
		namaIbu,
		namaAyah,
		jumlahSaudara
	);
	
}
