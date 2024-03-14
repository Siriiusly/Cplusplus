#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int baslangic, bitis;
	cout << "Baþlangýç deðerini giriniz: ";
		cin >> baslangic;
		cout << "Bitiþ deðerini giriniz: ";
			cin >> bitis;
			while (baslangic <= bitis) {
					if(baslangic % 7 == 0) {
						cout << " " << baslangic<<endl;
					}
					baslangic++;
			}
			cout << "Programýn sonu...\n";
	return 0;

}