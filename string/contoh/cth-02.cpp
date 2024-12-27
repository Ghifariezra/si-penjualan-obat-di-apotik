#include <iostream>
using namespace std;

int main(){
	char nama[] = "Ghifari";
	char nama02[30];
	int i;
	
	cout << "Menyalin String" << endl;
	cout << "~~~~~~~~~~~~~~~" << endl;
	
	for (i = 0; nama[i]; i++)
		nama02[i] = nama[i];
		nama02[i] = '\0';
		cout << "Tulisan Asli = " << nama << endl;
		cout << "Tulisan Hasil Salin = " << nama02 << endl;
		cout << endl;

	cin.get();
}