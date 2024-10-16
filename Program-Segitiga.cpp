#include<iostream>
using namespace std;

int main() {
	cout << " Selamat Datang di Program Segitiga\n\n";
	int n;
	cout << "Masukkan pola segitiga: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Program Selesai :)" << endl;

	return 0;
}