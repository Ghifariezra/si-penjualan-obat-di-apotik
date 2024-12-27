#include <iostream>

using namespace std;

int main (){
	int a = 2;
	
	// Pointer
	int* aPtr = &a;
	
	// Address A
	cout << "Nilai dari A: " << a << endl;
	cout << "Memory Address dari A: " << &a << endl;
	
	cout << endl;
	
	// Address aPtr
	cout << "Nilai dari A Pointer : " << *aPtr << endl;
	cout << "Memory Address dari A Pointer : " << aPtr << endl;
	
	
	cin.get();
	return 0;
}