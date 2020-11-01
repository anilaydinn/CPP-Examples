#include <iostream>

using namespace std;

int main(){

	string password = "yazilimbilimi";

	string input;

	cout << "Lütfen parolanızı girin:";

	cin >> input;

	if(password == input){
		cout << "Parolanızı doğru girdiniz...";
	}else{
		cout << "Parolanızı yanlış girdiniz...";
	}

	return 0;
}
