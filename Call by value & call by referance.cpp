#include <iostream>
using namespace std;

void sayiDegistir(int& deger) {
	deger = deger * 2;

}

int main() {
	int sayi;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	sayiDegistir(sayi);
	cout << "Yeni sayi: " <<sayi<< endl;




	return 0;
}


	
 

