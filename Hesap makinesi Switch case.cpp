#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, sonuc;
	char islem;
	cout << "Ýþlemi giriniz: ";
	cin >> sayi1 >> islem >> sayi2;
	switch (islem) {
	case'+':
		sonuc = sayi1 + sayi2;
		break;
	case'-':
		sonuc = sayi1 - sayi2;
		break;
	case '*':
		sonuc = sayi1 * sayi2;
		break;
	case'/':
		if (sayi2 == 0) {
			cout << "Tanýmsýz iþlem!" << endl;
			return 0;
		}
		sonuc = sayi1 / sayi2;
		break;
	case'%':
		if (sayi2 == 0) {
			cout << "Geçerli bir sayý giriniz!\n";
			return 0;
		}
		sonuc = sayi1 % sayi2;
		break;
	default:
		cout << "Geçerli bir iþlem giriniz!\n";
		return 0;
	}
		cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc << endl;
		return 0;


}