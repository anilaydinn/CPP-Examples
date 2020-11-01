#include <iostream>

using namespace std;

void factorial(int sayi);

int main(){

	int sayi;

	cout << "Sayıyı giriniz:";
	cin >> sayi;

	factorial(sayi);

	return 0;
}

void factorial(int sayi){

	int faktoriyel = 1;

	for(int i = 2; i <= sayi;i++){
		faktoriyel *= i;
	}
	cout << "Faktoriyel : " << faktoriyel << endl;
}
