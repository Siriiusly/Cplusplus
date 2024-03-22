#include <iostream>

using namespace std;


int f(int x) {
	int sonuc;
	sonuc = 3 * x + 2;
	return sonuc;

}
int alanHesapla(int x, int y) {
	int alan = x * y;
	return alan;

}

void kareAlanHesapla(int kenar) {
	cout << "Karenizin alani = " << (kenar * kenar) << endl;


}
void  hicBirSey(string isim) {
	cout << "Merhaba " << isim << endl;
}
string adSoyadBirlestir() {
	string ad, soyad, adSoyad;
	cout << "Lutfen adinizi giriniz: ";
	cin >> ad;
	cout << "Lutfen Soyadinizi giriniz: ";
	cin >> soyad;

	adSoyad = ad + " " + soyad;
	return adSoyad;
}

int main() {

	// cout << "sonuc : " << f(9) << endl;
	// cout << "Sonuc: " << alanHesapla(5,10) << endl;

	
	/*kareAlanHesapla(5);
	kareAlanHesapla(9);
	kareAlanHesapla(8);
	hicBirSey("Merve");*/
	

	cout << adSoyadBirlestir() << endl;
	int x = 40 * 50;
	cout << x << endl;
	cout << adSoyadBirlestir() << endl;

	cout << "Hoscakalin..." << endl;



	return 0;
}






