#include <iostream> 
using namespace std;




int main()
{
	int n;
	cout << "Kac adet tam sayi icerecegini yaziniz: ";
	cin >> n;


	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout <<"Sum: " << sum << endl;
	delete[]p;
	return 0;
}

	
 

