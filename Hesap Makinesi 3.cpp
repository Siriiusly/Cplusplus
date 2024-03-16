#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int sayi1, sayi2, sonuc=0;
	char islem,secim = 'e';
	bool devamEt;
	while (secim == 'e') {
		cout << "Ýþlemi giriniz: " << endl;
		cin >> sayi1 >> islem >> sayi2;
		devamEt = true;
		switch (islem) {
		case'+':
			sonuc = sayi1 + sayi2;
			break;
		case'-':
			sonuc = sayi1 - sayi2;
			break;
		case'/':
			if (sayi2 == 0) {
				devamEt = false;
				cout << "Bölüm sýfýr olamaz" << endl;
				break;
			}
			sonuc = sayi1 / sayi2 ;
			break;
		case'*':
			sonuc = sayi1 * sayi2;
			break;
		case'%':
			sonuc = sayi1 % sayi2;
			break;
		default:
			devamEt = false;
			cout << "Hatalý iþlem girdiniz!" << endl;
			
			break;
		}

		if (devamEt) {
			cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc << endl;
		}

		cout << "Baþka bir iþlem yapmak istiyor musunuz ?" << endl;
		cout << "e-evet , h-hayýr" << endl;
		cin >> secim;

	}
	cout << "Güle güle...";
	return 0;
	}

	