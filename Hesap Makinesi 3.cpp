#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int sayi1, sayi2, sonuc=0;
	char islem,secim = 'e';
	bool devamEt;
	while (secim == 'e') {
		cout << "��lemi giriniz: " << endl;
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
				cout << "B�l�m s�f�r olamaz" << endl;
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
			cout << "Hatal� i�lem girdiniz!" << endl;
			
			break;
		}

		if (devamEt) {
			cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc << endl;
		}

		cout << "Ba�ka bir i�lem yapmak istiyor musunuz ?" << endl;
		cout << "e-evet , h-hay�r" << endl;
		cin >> secim;

	}
	cout << "G�le g�le...";
	return 0;
	}

	