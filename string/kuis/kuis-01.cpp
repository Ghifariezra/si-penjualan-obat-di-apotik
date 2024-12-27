#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
	string teks;
    char str[25];
	int i;
	
	cout << "Masukan teks palindrom = "; cin >> teks;
	
	for (i = 0; teks[i]; i++)
		str[i] = teks[i];
		str[i] = '\0';
	
	if (teks == strrev(str)){
		cout << "Palindrom" << endl;
	} else {
		cout << "Bukan Palindrom" << endl;
	}
	
    cin.get();
}