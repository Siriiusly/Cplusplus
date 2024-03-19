#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int yildizSayisi;
	cout << "Yýldýz sayýsýný giriniz: ";
	cin >> yildizSayisi;
	
	for (int i = 0; i < yildizSayisi; i++) {
		cout << "*" << endl;
	}







	return 0;
}
	