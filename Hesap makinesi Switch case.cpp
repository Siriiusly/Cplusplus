#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, sonuc;
	char islem;
	cout << "��lemi giriniz: ";
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
			cout << "Tan�ms�z i�lem!" << endl;
			return 0;
		}
		sonuc = sayi1 / sayi2;
		break;
	case'%':
		if (sayi2 == 0) {
			cout << "Ge�erli bir say� giriniz!\n";
			return 0;
		}
		sonuc = sayi1 % sayi2;
		break;
	default:
		cout << "Ge�erli bir i�lem giriniz!\n";
		return 0;
	}
		cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc << endl;
		return 0;


}