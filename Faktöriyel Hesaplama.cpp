#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
     int x, sonuc = 1;
	cout << "Fakt�riyel Makinesine hosgeldiniz! L�tfen say� giriniz : ";
	cin >> x;
	for(int i=x;i>0;i--){
		if (i == 0) {
			cout << "Sonu� = 1";
			return 0;
		}
		sonuc = sonuc * i;
	
	}
	cout << "Sonu� = " << sonuc<<" Ve Tar�k seni �ok seviyor";
	return 0;
}