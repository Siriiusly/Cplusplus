#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sifre = 4321;
	int input;
	do {
		cout << "Lütfen þifreyi giriniz: ";
		cin >> input;
	} while (input != sifre);
	cout << "Skynet'e hoþgeldiniz!\n";
	return 0;
}