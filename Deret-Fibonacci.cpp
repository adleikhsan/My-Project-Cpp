
#include <iostream>
using namespace std;

int main() {

	int n;
	int f_n;
	int f_n1;
	int f_n2;

	cout << "Wellcome to Program Deret Fibonacci\n\n";
	cout << "Masukkan Nilai ke-n: ";
	cin >> n;
	cout << endl;

	f_n1 = 1;
	f_n2 = 0;
	f_n = f_n1 + f_n2;
	cout << f_n << " ";

	for (int i = 1; i <= n; i++) {
		f_n = f_n + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";

	}
	cout << endl << endl;
	cout << "Program Selesai" << endl;
	cin.get();
	return 0;
}