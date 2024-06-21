#include <iostream> 
using namespace std;

int* fonksiyon() {
	int* p = new int;
	*p = 37;
	return p;


}



int main()
{
	int* ptr;
	ptr = fonksiyon();
	if (ptr != NULL)
	{
		cout << *ptr << endl;
		delete ptr;
	}



	return 0;
}

	
 

