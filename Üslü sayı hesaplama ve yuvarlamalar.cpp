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
	sonuc = floor(2.7);   //floor kendinden k���k en yak�n tamsay�ya yuvarlar
	cout << "sonuc: " << sonuc << endl;

	sonuc = ceil(2.7);
	cout << "sonuc: " << sonuc << endl; //ceil kendinden kendinden b�y�k en k���k tamsay�ya yuvarlar

	sonuc = round(7.4);
	cout << "sonuc: " << sonuc << endl; //round yuvarlar 


	return 0;






}