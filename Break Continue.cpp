#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	for (int i = 0; i <= 5; i++) {                 //break:döngüyü sonlandýrýr(döngü dýþýna çýkýlýr).
		if (i == 3)                                //continue:continue keywordunun altýndaki kod kýsýmlarý atlanýp döngüye devam edilir.
			continue;
		cout << i << "  ";

	}
	cout << endl;
	return 0;
}