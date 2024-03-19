#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int en, boy;
	cout << "En ve boy giriniz: ";
	cin >> en >> boy;
	for (int i = 1; i <= boy; i++) {
		for (int j = 1; j <= en; j++) {
			cout << "* ";
		}
		cout << endl;
	}







	return 0;
}
	