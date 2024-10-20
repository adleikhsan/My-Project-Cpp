#include<iostream>
using namespace std;

int main() {
	cout << " Selamat Datang di Program Segitiga\n\n";
	int n;
	cout << "Masukkan pola segitiga: ";
	cin >> n;
	cout << endl;

	// Pola ke 1
	cout << "Pola ke-1 :\n\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Pola ke 2
	cout << "Pola ke-2 :\n\n";
	for (int i = 0; i < n; i++) {
		for (int k = n; k > i; k--) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Pola ke 3
	cout << "Pola ke-3 :\n\n";
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k < i; k++) {
			cout << " ";
		}
		for (int j = n; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Pola ke 4
	cout << "Pola ke-4 :\n\n";
	for (int i = 1; i <= n; i++) {
		for (int k = n; k > i; k--) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Pola ke 5
	cout << "Pola ke-5 :\n\n";
	for (int i = 1; i <= n; i++) {
		for (int k = n; k > i; k--) {
			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1 ); j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	// Pola ke 6
	cout << "Pola ke-6 :\n\n";
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k < i; k++) {
			cout << " ";
		}
		for (int j = n; j >= (2 * i - n); j--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Program Selesai :)" << endl;

	return 0;
}
