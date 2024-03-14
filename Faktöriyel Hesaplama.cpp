#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
     int x, sonuc = 1;
	cout << "Faktöriyel Makinesine hosgeldiniz! Lütfen sayý giriniz : ";
	cin >> x;
	for(int i=x;i>0;i--){
		if (i == 0) {
			cout << "Sonuç = 1";
			return 0;
		}
		sonuc = sonuc * i;
	
	}
	cout << "Sonuç = " << sonuc<<" Ve Tarýk seni çok seviyor";
	return 0;
}