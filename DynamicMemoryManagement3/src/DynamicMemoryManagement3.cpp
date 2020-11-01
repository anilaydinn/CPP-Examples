#include <iostream>

using namespace std;

int main(){

	int *ptr1 = nullptr;
	int *ptr2 = nullptr;

	/*
	ptr = new int;

	*ptr = 10;

	delete ptr;

	*ptr = 10;

	cout << *ptr << endl;
	*/

	ptr1 = new int;

	*ptr1 = 10;

	ptr2 = ptr1;

	delete ptr1;

	return 0;
}
