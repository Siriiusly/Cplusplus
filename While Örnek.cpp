#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int index = 0;
	while (index<=3) {
		cout << "�ndex de�eri 3'ten k���k!\n";
		index++;
	}
	cout << "�ndex : " << index;
	cout << endl;
	cout << "Program�n sonu.\n";
	return 0;

}