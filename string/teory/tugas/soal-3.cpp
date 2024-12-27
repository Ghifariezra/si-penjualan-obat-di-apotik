#include <iostream>
#include <cstdlib>

using namespace std;

int main(){	
	char numberString[] = "-32.40"; 
	double numberInDouble;
	cout << "Number in  String = " << numberString << endl;

	numberInDouble = atof(numberString);
	cout << "Number in Double = " << numberInDouble << endl;
	
	cin.get();
}