#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, sonuc;
	char islem;
	cout << "��lemi giriniz: ";
	cin >> sayi1 >> islem >> sayi2;
	if (islem == '+') {
		sonuc = sayi1 + sayi2;
	}
	else if (islem == '-') {
		sonuc = sayi1 - sayi2;
	}
	else if (islem == '*') {
		sonuc = sayi1 * sayi2;
	}
	else if (islem == '/') {
		if (sayi2 == 0) {
			cout << "Tan�ms�z i�lem!" << endl;
			return 0;
		}
		sonuc = sayi1 / sayi2;
	}
	else if (islem == '%') {
		if (sayi2 == 0) {
			cout << "L�tfen ge�erli bir say� giriniz!\n";
			return 0;
		}
		sonuc = sayi1 % sayi2;
	}
	else {
		cout << "Yanl�� i�lem girdiniz!";
	}
	cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc<<endl;
	 return 0;


}