#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	float sayi1, sayi2, sonuc = 0;
	char secim;
	cout << "Say�lar� giriniz: ";
	cin >> sayi1 >> sayi2;
	cout << "Yapmak istedi�iniz i�lemi se�iniz(+ , -, *, / ): ";
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
			cout << "Ge�ersiz i�lem girdiniz!\n";



		}
	cout << "��leminizin sonucu = " << sonuc << endl;



	return 0;
}

