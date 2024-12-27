#include <iostream>

using namespace std;

int main(){
	int N;
	
	
	cout << "Seseorang Mempunyai Range Nilai Yang Terdiri Dari = "; cin >> N;
	
	if (N < 45)
		cout << "E" << endl;
	else
		if (N <= 55)
			cout << "D" << endl;
		else
			if (N <= 55)
				cout << "C" << endl;
			else
				if (N <= 60)
					cout << "C+" << endl;
				else
					if (N <= 63)
						cout << "B-" << endl;
					else
						if (N <= 67)
							cout << "B" << endl;
						else
							if (N <= 71)
								cout << "B+" << endl;
							else
								if (N <= 75)
									cout << "A-" << endl;
								else
									if (N <= 79)
										cout << "A" << endl;
									else
										cout << "ANGKA TIDAK VALID." << endl;
	cin.get();
}