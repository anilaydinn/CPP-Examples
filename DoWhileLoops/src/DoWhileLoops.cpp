#include <iostream>

using namespace std;

int main(){

	string password = "123456";
	string  input;

	do{
		cout << "Parolanızı Girin:";
		cin >> input;

		if(input != password){
			cout << "Parolayı yanlış girdiniz..." << endl;
		}

	}while(input != password);

	cout << "Parolayı doğru girdiniz..." << endl;

	return 0;
}
