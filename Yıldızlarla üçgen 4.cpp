#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int kenar;
	cout << "Kenar giriniz: ";
	cin >> kenar;

	cout << endl;
	for (int i = 0; i < kenar; i++) {
		for (int j = kenar - 1; i < j; j--) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << endl;

	}




	return 0;
}