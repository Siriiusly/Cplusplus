#include <iostream>
using namespace std;

int main() {
	int x = 14;
	int y = 28;
	int* ptr;

	ptr = &x;


	*ptr = *ptr * 2;
	cout << *ptr;

	return 0;
}


	
 

