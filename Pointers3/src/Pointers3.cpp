#include <iostream>

using namespace std;

int main(){

	/*
	int array[] = {1,2,3,4};

	int *ptr = array;

	cout << ptr << endl;

	ptr = ptr + 1;

	cout << "Pointerin yeni değeri: " << ptr << endl;
	*/

	string array[] = {"Anıl","Thracian","Aydın"};

	string *ptr = array;

	cout << ptr + 1 << endl;
	cout << *(ptr + 1) << endl;
	cout << ptr[1] << endl;
	cout << array[2] << endl;

	return 0;
}
