#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int yildizSayisi;
	cout << "Y�ld�z say�s�n� giriniz: ";
	cin >> yildizSayisi;
	
	for (int i = 0; i < yildizSayisi; i++) {
		cout << "*" << endl;
	}







	return 0;
}
	