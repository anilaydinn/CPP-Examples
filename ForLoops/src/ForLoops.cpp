#include <iostream>

using namespace std;

int main(){

	int sayi;

	cout << "Sayi :";
	cin >> sayi;

	int factorial = 1;

	for(int i = 1; i <= sayi; i++){

		factorial *= i;
	}

	cout << "Faktöriyel : " << factorial << endl;

	return 0;
}
