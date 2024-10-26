#include<iostream>
#include<cstdlib>

using namespace std;
int main() {

	cout << "Selamat Datang di Program Lempar Dadu\n";

	char lanjut;
	while (true) {
		cout << "Lempar dadu sekarang? (y/n): ";
		cin >> lanjut;

		if (lanjut == 'y') {
			cout << 1 + (rand() % 6) << endl;
		}
		else if (lanjut == 'n') {
			break;
		}
		else {
			cout << "WARNING! MASUKKAN (y/n) ! \n";
		}

	}
	
	cin.get();
	return 0;
}