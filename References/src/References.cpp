#include <iostream>

using namespace std;

void degerDegistir(int &ref){

	ref = 20;
}

int main(){

	int a = 10;
 /*
	cout << "a'nın değeri: " << a << endl;

	degerDegistir(a);

	cout << "a'nın yeni değeri: " << a << endl;
  */

	/*
	int &ref;

	ref = a;
	 */

	int *ptr;

	ptr = &a;

	return 0;
}
