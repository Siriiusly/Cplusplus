#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int index = 0;
	while (index<=3) {
		cout << "Ýndex deðeri 3'ten küçük!\n";
		index++;
	}
	cout << "Ýndex : " << index;
	cout << endl;
	cout << "Programýn sonu.\n";
	return 0;

}