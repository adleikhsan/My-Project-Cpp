#include<iostream>
using namespace std;

int main() {
	float a,b,hasil;
	char Aritmatika;

	//title
	cout << "Selamat Datang Di Program Calculator Sederhana\n\n";

	cout << "Masukkan angka pertama: ";
	cin >> a;
	cout << "Masukkan Operasi +,-,/,* : ";
	cin >> Aritmatika;
	cout << "Masukkan angka kedua: ";
	cin >> b;

	if (Aritmatika == '+') {
		hasil = a + b;
	}
	else if (Aritmatika == '-') {
		hasil = a - b;
	}
	else if (Aritmatika == '/') {
		hasil = a / b;
	}
	else if (Aritmatika == '*') {
		hasil = a * b;
	}
	else {
		cout << "Operasi anda tidak sesuai!\n";
	}
		cout << "hasil dari perhitungan adalah: " << hasil << endl;


		cin.get();
		return 0;
}
