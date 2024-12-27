#include <iostream>
using namespace std;

int main()
{
    int citra[] = {10, 20, 30, 40, 50}, *val[5];
	
	val = &citra;
	
	cout << val << endl;
	
    cin.get();
}
