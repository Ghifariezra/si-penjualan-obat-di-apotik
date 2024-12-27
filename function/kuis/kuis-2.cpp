#include <iostream>
using namespace std;

int FAKT(int a){
	if (a == 0){
		return(1);
	} else {
		return (a * FAKT(a - 1));
	}
}

int main(){
	int x;
	cout << "Masukan Faktorial Yang Diinginkan = "; cin >> x;
	cout << "Faktorial dari " << x << "! " << "Adalah = " << FAKT(x) << endl;
	cin.get();
}