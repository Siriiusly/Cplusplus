#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Turkish");
	int hiz;
	string tur;
	cout << "Arac�n�z�n t�r�n� giriniz(otomobil=0,otob�s=t,kamyonet=k): ";
	cin >> tur;
	if (!(tur == "o" || tur == "k" || tur == "t")) {
		cout << "L�tfen ge�erli bir ara� girin!\n";
		return 0;
	}
	cout << "Arac�n�z�n h�z�n� giriniz: ";
	cin >> hiz;
	if (tur == "o") {
		cout << "Arac�n�z otomobildir.\n";
		if (hiz > 82) {
			cout << "Arac�n�z cezal�d�r!\n";
		}
		else
			cout << "Arac�n�z kurallara uygundur\n";
	}
	else if (tur == "t") {
		cout << "Arac�n�z otob�st�r.\n";
		if (hiz > 70) {
			cout << "Arac�n�z cezal�d�r!\n";
		}
		else
			cout << "Arac�n�z kurallara uygundur\n";
	}
	else if (tur == "k") {
		cout << "Arac�n�z kamyonettir.\n";
		if (hiz > 50) {
			cout << "Arac�n�z cezal�d�r!\n";
		}
		else
			cout << "Arac�n�z kurallara uygundur.\n";
	}
	else
		cout << "L�tfen ge�erli bir ara� t�r� giriniz!\n";



	return 0;
}