#include <iostream>
using namespace std;

int main() {
	int sayi;
	cout << "Lutfen bir sayi giriniz: ";
	cin >> sayi;
	for (int i = 1; i <= sayi; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
	
		
	cout << endl;
	return 0;
}