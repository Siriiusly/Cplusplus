#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, sonuc;
	char islem;
	cout << "Ýþlemi giriniz: ";
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
			cout << "Tanýmsýz iþlem!" << endl;
			return 0;
		}
		sonuc = sayi1 / sayi2;
	}
	else if (islem == '%') {
		if (sayi2 == 0) {
			cout << "Lütfen geçerli bir sayý giriniz!\n";
			return 0;
		}
		sonuc = sayi1 % sayi2;
	}
	else {
		cout << "Yanlýþ iþlem girdiniz!";
	}
	cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc<<endl;
	 return 0;


}