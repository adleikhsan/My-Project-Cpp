#include <iostream>
using namespace std;

void main() {

	string kata, katabalik;

	cout << "Selamat Datang di Program Cek Kata Terbalik \n";
	cout << "Silakan Masukkan ke \"input kata\" kata yang ingin di cek apakah bisa terbaca dari belakang atau tidak :)\n";
	cout << "Input kata: ";
	cin >> kata;

	for (int i = kata.length() - 1; i >= 0; i--) {
		katabalik += kata[i];
	}
	if (kata == katabalik) {
		cout << "Hasil: true\n";
	}
	else {
		cout << "Hasil: false\n";
	}

}