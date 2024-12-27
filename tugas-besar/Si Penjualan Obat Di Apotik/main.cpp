/* 
	Tugas Besar Praktek Algoritma & Pemograman Kelas A
	
	Nama	: Ghifari Ezra Ramadhan
	NPM		: 4524210041
	Kelas	: A
	
	Nomor 19 - Si Penjual Obat Di Apotik
	Materi	:
		- Selection / Seleksi
		- Repetation / Pengulangan
		- Array
		- Function
		- String / File
		- Selection Sort - Descending
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#define MAXLINES 10

using namespace std;

/* Function */
void struk(int x, string name[], int semuaPilihan[], int semuaTotalBarang[], long int semuaHarga[]);
int transaksi(long int hargaBarang, long int jumlahBarang);
void menu(bool exitMenu, string pathStok);
void si_penjualan_obat_di_apotek(bool exitMenuUtama = false);

int main(){
	si_penjualan_obat_di_apotek();
	cin.get();
}

void struk(int x, string name[], int semuaPilihan[], int semuaTotalBarang[], long int semuaHarga[]) {
    string pathFileSatuan = "data/daftar-satuan.txt";
    string markUp = string(54, '='),
           markUpThin = string(54, '-'),
           satuan[MAXLINES];
    int lineSatuan = 0,
        k = 0,
        j,
		i,
		temp;

    ifstream fileSatuan(pathFileSatuan);

    /* Selection / Seleksi */
    if (fileSatuan.is_open()) {
        
        /* Repetation / Pengulangan */
        while (!fileSatuan.eof()) {
            getline(fileSatuan, satuan[lineSatuan]);
            lineSatuan++;
        }
        fileSatuan.close();
    } else {
        cout << "File tidak bisa di buka." << endl;
    }

    /* 
		Repetation / Pengulangan:
			- Selection Sort - Descending
    */
	while (k <= x - 2){
		j = k;
		i = k + 1;
		
		/* Repetation / Pengulangan */
		while (i <= x - 1){
			if (semuaHarga[i] > semuaHarga[j]){
				j = i;
			}
			i++;
		}
		
		temp = semuaHarga[j];
		semuaHarga[j] = semuaHarga[k]; 
		semuaHarga[k] = temp;

		temp = semuaPilihan[j];
		semuaPilihan[j] = semuaPilihan[k];
		semuaPilihan[k] = temp;

		temp = semuaTotalBarang[j];
		semuaTotalBarang[j] = semuaTotalBarang[k];
		semuaTotalBarang[k] = temp;

		k++;
	}

    cout << markUp << endl;
    cout << "|" << setw(35) << "STRUK PEMBELIAN" << setw(18) << "|" << endl;
    cout << markUp << endl;

    /* Repetation / Pengulangan */
    for (int i = 0; i < x; i++) {
        cout << "| Jenis Obat: " << setw(38) << left << name[semuaPilihan[i] - 1] << " |" << endl;
        cout << "| Total Harga: " << setw(24) << right << "Rp. " << semuaHarga[i] << " " << satuan[semuaPilihan[i] - 1] << " |" << endl;
        cout << "| Jumlah Pembelian: " << setw(32) << right << semuaTotalBarang[i] << " |" << endl;
        if (i < x - 1) {
            cout << markUpThin << endl;
        }
    }
    cout << markUp << endl;
}

int transaksi(long int hargaBarang, long int jumlahBarang){
	return (hargaBarang * jumlahBarang);
}

void menu(bool exitMenu, string pathStok = "data/daftar-stok.txt") {
	/* Array */
    string pathFileMenu = "data/daftar-menu.txt",
           pathFileHarga = "data/daftar-harga.txt",
           pathFileStok = pathStok,
		   name[MAXLINES],
           harga[MAXLINES],
           stok[MAXLINES],
           markUp = string(63, '=');
    char lanjutBeli[0];
    int x = 0,
        linesMenu = 0,
        pilihanMenu,
        banyakBarang,
        semuaPilihan[MAXLINES],
        semuaTotalBarang[MAXLINES],
		originalIndices[MAXLINES];
    long int totalPembelian,
             semuaHarga[MAXLINES];
    
	/* File */
    ifstream fileMenu(pathFileMenu),
             fileHarga(pathFileHarga),
             fileStok(pathFileStok);
    
	/* Selection / Seleksi */
    if (fileMenu.is_open() && fileHarga.is_open() && fileStok.is_open()) {
		/* Repetation / Pengulangan */
        while (!fileMenu.eof() && !fileHarga.eof() && !fileStok.eof()) {
            getline(fileMenu, name[linesMenu]);
            getline(fileHarga, harga[linesMenu]);
            getline(fileStok, stok[linesMenu]);
            originalIndices[linesMenu] = linesMenu; // Menyimpan posisi asli
            linesMenu++;
        }
        fileMenu.close();
    } else {
        cout << "File tidak bisa di buka." << endl;
    }

    int tempStok[MAXLINES];
	
	/* Repetation / Pengulangan */
    for(int i = 0; i < linesMenu; i++) {
        tempStok[i] = atoi(stok[i].c_str());
    }

    /* Selection Sort Descending */
    int k = 0;
    while (k < linesMenu - 1) {
        int maxIndex = k;
        int i = k + 1;
        
        while (i < linesMenu) {
            if (tempStok[i] > tempStok[maxIndex]) {
                maxIndex = i;
            }
            i++;
        }
        
        if (maxIndex != k) {
            // Swap stock values
            int tempS = tempStok[k];
            tempStok[k] = tempStok[maxIndex];
            tempStok[maxIndex] = tempS;
            
            // Swap string values
            string tempName = name[k];
            name[k] = name[maxIndex];
            name[maxIndex] = tempName;
            
            string tempHarga = harga[k];
            harga[k] = harga[maxIndex];
            harga[maxIndex] = tempHarga;
            
            string tempStokStr = stok[k];
            stok[k] = stok[maxIndex];
            stok[maxIndex] = tempStokStr;
            
            // Swap indices
            int tempIndex = originalIndices[k];
            originalIndices[k] = originalIndices[maxIndex];
            originalIndices[maxIndex] = tempIndex;
        }
        k++;
    }

    cout << markUp << endl;
    cout << "|" << setw(40) << "OBAT YANG TERSEDIA" << setw(22) << "|" << endl;
    cout << markUp << endl;
    cout << "| " << setw(2) << right << "Nama Obat" << setw(27) << "| " << "Harga" << setw(12) << "| " << setw(7) << left << "Stock" << "|" << endl;
    cout << markUp << endl;
    
	/* Repetation / Pengulangan */
    for (int i = 0; i < linesMenu; i++) {
        cout << "| " << setw(2) << right << i + 1 << ". "
             << setw(30) << left << name[i]
             << "| Rp. " << setw(10) << right << harga[i] 
             << " | " << setw(6) << right << stok[i] << " |" << endl;
    }
    cout << markUp << endl;

    exitMenu = true;
	
	/* Repetation / Pengulangan */
    while (exitMenu) {
        cout << "Pilih obat yang anda inginkan [1 - " << linesMenu << "]: ";
        cin >> pilihanMenu;
        
        if (pilihanMenu >= 1 && pilihanMenu <= linesMenu) {
            cout << "Ingin beli berapa banyak: ";
            cin >> banyakBarang;
            
            int realHarga[MAXLINES];
            int realStok[MAXLINES];
            
            for (int i = 0; i < linesMenu; i++) {
                realHarga[i] = atoi(harga[i].c_str());
                realStok[i] = atoi(stok[i].c_str());
            }
            
            if (banyakBarang > 0 && banyakBarang <= realStok[pilihanMenu - 1]) {
                totalPembelian = transaksi(realHarga[pilihanMenu - 1], banyakBarang);
                
                // Update menggunakan indeks asli
                int originalIndex = originalIndices[pilihanMenu - 1];
                realStok[pilihanMenu - 1] -= banyakBarang;
                
                // Update file menggunakan indeks asli
                ofstream fileStok(pathFileStok);
                if (fileStok.is_open()) {
                    for(int i = 0; i < linesMenu; i++) {
                        for(int j = 0; j < linesMenu; j++) {
                            if(originalIndices[j] == i) {
                                fileStok << realStok[j] << endl;
                                break;
                            }
                        }
                    }
                    fileStok.close();
                }
                
                semuaPilihan[x] = pilihanMenu;
                semuaHarga[x] = totalPembelian;
                semuaTotalBarang[x] = banyakBarang;
                x++;
                
                cout << "Apakah anda ingin membeli lagi [Y/N]? ";
                cin >> lanjutBeli;
                
                if (tolower(lanjutBeli[0]) == 'y') {
                    cout << endl;
                    exitMenu = true;
                } else {
                    cout << endl;
                    struk(x, name, semuaPilihan, semuaTotalBarang, semuaHarga);
                    exitMenu = false;
                }
            } else {
                cout << "[Stok tidak mencukupi.]" << endl;
                exitMenu = true;
                cout << endl;
            }
        } else {
            cout << "[Maaf daftar yang anda inginkan tidak tersedia.]" << endl;
            exitMenu = false;
            cout << endl;
            menu(exitMenu);
        }
    }
}

void si_penjualan_obat_di_apotek(bool exitMenuUtama){
	string pathFileSambutan = "data/sambutan.txt",
		   sambutan[MAXLINES],
		   markUp = string(54, '=');
		   
	int linesSambutan = 0,
		pilihanMenuUtama;
	
	ifstream fileSambutan(pathFileSambutan);
	
	/* Selection / Seleksi */
	if (fileSambutan.is_open()){
		/* Repetation / Pengulangan */
		while (!fileSambutan.eof()){
			getline(fileSambutan, sambutan[linesSambutan]);
			linesSambutan++;
		}
		fileSambutan.close();
	} else {
		cout << "[File tidak bisa di buka.]" << endl;
	}
	
	cout << markUp << endl;
	/* Repetation / Pengulangan */
	for (int i = 0; i < linesSambutan; i++){
		cout << "|" << sambutan[i] << "|" << endl;
	}
	cout << markUp << endl;
	cout << "| " << setw(2) << right << "1. " << "Beli Obat" << setw(40) << " |"
		 << endl
		 << "| " << setw(2) << right << "2. " << "Nanti Aja" << setw(40) << " |"
		 << endl;
	cout << markUp << endl;	

	/* Repetation / Pengulangan */
	exitMenuUtama = true;
	while (exitMenuUtama){
		cout << "Masukan pilihan anda [1/2]: ";
		cin >> pilihanMenuUtama;
		
		if (pilihanMenuUtama == 1){
			exitMenuUtama = false;
			menu(exitMenuUtama);
		} else {
			if (pilihanMenuUtama == 2){
				cout << "[Keluar.]" << endl;
				exitMenuUtama = false;
				cout << endl;
			} else {
				cout << "[Masukan pilihan yang sesuai.]" << endl;
				exitMenuUtama = true;
				cout << endl;
			}
		}
	}
}
