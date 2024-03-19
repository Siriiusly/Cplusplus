#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	int ucgenKenar;
	cout << "Kenar uzunluðu giriniz: ";
	cin >> ucgenKenar;
	for (int i = ucgenKenar; 1<=i; i--) {
		for (int j = 1; j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}






	return 0;
}
	