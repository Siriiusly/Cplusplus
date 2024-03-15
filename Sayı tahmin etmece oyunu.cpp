#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int tahmin;
	char cevap = 'e';
	srand(time(NULL));
	while (cevap == 'e') {
		int rastgeleSayi = rand() % 100;
		cout << "0 ile 100 arasindan bir sayi tuttum." << endl;

		cout << "Hadi tahmin et: ";
		cin >> tahmin;

		while (tahmin != rastgeleSayi) {
			if (rastgeleSayi > tahmin) {
				cout << tahmin << " tuttugum sayidan kucuk." << endl;
			}
			else {
				cout << tahmin << " tuttugum sayidan buyuk." << endl;
			}
			cout << "Tekrar tahmin et!\n";
			cin >> tahmin;
		}

		cout << "Tebrikler! Tuttugum sayiyi buldun." << endl;
		cout << "Yeniden oynamak ister misin ?" << endl;
		cout << "e-evet , h-hayir ";
		cin >> cevap;


	}












	return 0;
}