#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	for (int i = 0; i <= 5; i++) {                 //break:d�ng�y� sonland�r�r(d�ng� d���na ��k�l�r).
		if (i == 3)                                //continue:continue keywordunun alt�ndaki kod k�s�mlar� atlan�p d�ng�ye devam edilir.
			continue;
		cout << i << "  ";

	}
	cout << endl;
	return 0;
}