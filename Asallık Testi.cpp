#include <iostream>
using namespace std;

int main() {
	int sayi = 0, sayac = 1;
	char secim = 'e';
	while (secim == 'e') {
		cout << "Asallik kontrolu yapilacak sayiyi giriniz: ";
		cin >> sayi;
		if (sayi>2) {
			while(sayac<sayi-1){
			sayac++;
			if (sayi % sayac == 0) {
				cout << "Sayi asal degildir!\n";
				break;
			}
			else if (sayac + 1 == sayi) {
				cout << "Sayi asaldir!.\n";
			}
			}

		}
		else if (sayi==2) {
			cout << "Girdiginiz sayi en kucuk asal sayidir.\n";
		}
		else {
			cout << "1'den farkli pozitif tam sayi giriniz!\n";
		}
		cout << "e-devam , h-cikis\n";
		cin >> secim;
			sayac = 1;
	}
	
	
	return 0;
}