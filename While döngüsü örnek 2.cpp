#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int baslangic, bitis;
	cout << "Ba�lang�� de�erini giriniz: ";
		cin >> baslangic;
		cout << "Biti� de�erini giriniz: ";
			cin >> bitis;
			while (baslangic <= bitis) {
					if(baslangic % 7 == 0) {
						cout << " " << baslangic<<endl;
					}
					baslangic++;
			}
			cout << "Program�n sonu...\n";
	return 0;

}