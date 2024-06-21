#include <iostream>
using namespace std;


int ucaginYonBilgileriniHesapla(int x_) {
	x_ = 34;
	return x_;

}

void ucaginYonBilgileriniHesapla(int* p) {

	*p = 34;
}




int main() {
	int x = 30;
	int* p;
	p = &x;
	ucaginYonBilgileriniHesapla(p);

	cout << "Yeni yon bilgisi: " << x<<endl;






	return 0;
}


	
 

