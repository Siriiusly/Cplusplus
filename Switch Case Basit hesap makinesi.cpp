#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	float sayi1, sayi2, sonuc = 0;
	char secim;
	cout << "Sayýlarý giriniz: ";
	cin >> sayi1 >> sayi2;
	cout << "Yapmak istediðiniz iþlemi seçiniz(+ , -, *, / ): ";
	cin >> secim;
		switch (secim) {
		case '+':
			 sonuc = sayi1 + sayi2;
			break;
		case '-':
			 sonuc = sayi1 - sayi2;
			break;
		case '*':
			 sonuc = sayi1 * sayi2;
			break;
		case '/':
			 sonuc = sayi1 / sayi2;
			break;
		default:
			cout << "Geçersiz iþlem girdiniz!\n";



		}
	cout << "Ýþleminizin sonucu = " << sonuc << endl;



	return 0;
}

