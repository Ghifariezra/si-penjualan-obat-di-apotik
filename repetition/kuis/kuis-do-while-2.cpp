#include <iostream>

using namespace std;

int main(){
	int N;
	N = 0;

	while(N <= 99){
		N++;
		
		if (N % 2 == 0){
			cout << N << endl;
		}
	}
	
	cin.get();
}