#include <iostream>
using namespace std;
int main() 
{
	float sayi1, sayi2,sonuc=0;
	int islem;   //islem degeri toplama icin 1,cikarma icin 2,carpma icin 3,bolme icin 4
		cout << "Lutfen 1.sayiyi giriniz: ";
		cin >> sayi1;
		cout << "Lutfen 2.sayiyi giriniz: ";
		cin >> sayi2;

		cout << "Lutfen yapmak istediginiz islemi seciniz(toplama icin 1,cikarma icin 2,carpma icin 3,bolme icin 4) : ";
			cin >> islem;
		if (islem == 1) {
			sonuc= sayi1 + sayi2;
		}
		else if(islem==2) {
			sonuc= sayi1 - sayi2;
		}
		else if(islem == 3) {
			sonuc= sayi1 * sayi2;
		}
		else if(islem == 4) {
			sonuc= sayi1 / sayi2;
		}
		else {
			cout << "Tanimsiz islem!\n";
			
		}
		cout << "Isleminizin sonucu = " << sonuc << endl;

	return 0;
}