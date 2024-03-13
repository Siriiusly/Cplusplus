#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Turkish");
	int hiz;
	char tur;
	cout << "Aracýnýzýn türünü giriniz(otomobil=0,otobüs=t,kamyonet=k): ";
	cin >> tur;
	cout << "Aracýnýzýn hýzýný giriniz: ";
	cin >> hiz;
	if (tur == 'o') {
		cout << "Aracýnýz otomobildir.\n";
		if (hiz > 82) {
			cout << "Aracýnýz cezalýdýr!\n";
		}
		else
			cout << "Aracýnýz kurallara uygundur\n";
	}
	else if (tur == 't') {
		cout << "Aracýnýz otobüstür.\n";
		if (hiz > 70) {
			cout << "Aracýnýz cezalýdýr!\n";
		}
		else
			cout << "Aracýnýz kurallara uygundur\n";
	}
	else if (tur == 'k') {
		cout << "Aracýnýz kamyonettir.\n";
		if (hiz > 50) {
			cout << "Aracýnýz cezalýdýr!\n";
		}
		else
			cout << "Aracýnýz kurallara uygundur.\n";
	}
	else
		cout << "Lütfen geçerli bir araç türü giriniz!\n";



	return 0;
}