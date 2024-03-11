#include <iostream>
using namespace std;
int main() 
{
	int sifre=1234;
	int kullaniciGirdisi;
	cout << "Lutfen sifrenizi giriniz: ";
	cin >>kullaniciGirdisi ;

	if (sifre == kullaniciGirdisi) {  // "==" soldaki deger sagdaki degere esit mi kontrolu,esitse true degilse false.
		cout << "Sisteme Hosgeldiniz!\n";
	}
	else
	{
		cout << "Sifre yanlis,tekrar giriniz!\n";
	}








	return 0;
}