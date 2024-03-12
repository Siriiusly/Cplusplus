#include <iostream>
using namespace std;
int main() {
	
	int sayi1, sayi2;
	cout << "1.sayiyi giriniz: ";
	cin >> sayi1;
	cout << "2.sayiyi giriniz: ";
	cin >> sayi2;
	if (sayi1 > 0 && sayi2 > 0) {
		cout << "Her iki sayiniz da pozitif";
	}
	else if (sayi1 < 0 && sayi2 < 0) {
		cout << "Her iki sayiniz da negatif\n";
	}
	else if (sayi1 < 0 || sayi2 < 0) {
		cout << "Sayilarinizdan biri negatif";
	}
	



	return 0;
}
