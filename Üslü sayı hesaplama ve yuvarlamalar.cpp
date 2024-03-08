#include <iostream>
#include <cmath>
using namespace std;

int main()
{   /*
	int sonuc,x,y;
	cout << "Lutfen ussu alinacak sayiyi giriniz: ";
	cin >> x;
	cout << "Lutfen ussu giriniz : ";
		cin >> y;
	sonuc = pow(x, y);
	cout << sonuc;
	*/

	int sonuc;
	sonuc = floor(2.7);   //floor kendinden küçük en yakýn tamsayýya yuvarlar
	cout << "sonuc: " << sonuc << endl;

	sonuc = ceil(2.7);
	cout << "sonuc: " << sonuc << endl; //ceil kendinden kendinden büyük en küçük tamsayýya yuvarlar

	sonuc = round(7.4);
	cout << "sonuc: " << sonuc << endl; //round yuvarlar 


	return 0;






}