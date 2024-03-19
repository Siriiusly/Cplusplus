#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int kenar;
	cout << "Kenar giriniz: ";
	cin >> kenar;
	cout << endl;
	for (int i = 0; i < kenar; i++) {
		for (int x = 0; x < i; x++) {
			cout << " ";
		}
		for (int j = kenar; i < j; j--) {
			cout << "*";
		}
		cout << endl;
	}





	return 0;
}
	