#include <iostream>

using namespace std;

int main()
{
	int x, y;
	string isim;
	cout << "Isminizi giriniz : ";
	cin >> isim;
	cout << "Merhaba " << isim << " Alan hesaplamaya Hosgeldin!"<<endl;
	cout << "Lutfen dikdortgenin enini giriniz : " << endl;
	cin >> x;
	cout << "Lutfen dikdorgenin boyunu giriniz : " << endl;
	cin >> y;
	int	alan = (x * y);
	cout << "Dikdorgenin Alani = " <<alan<< endl;




	return 0;






}