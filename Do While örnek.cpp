#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sifre = 4321;
	int input;
	do {
		cout << "L�tfen �ifreyi giriniz: ";
		cin >> input;
	} while (input != sifre);
	cout << "Skynet'e ho�geldiniz!\n";
	return 0;
}