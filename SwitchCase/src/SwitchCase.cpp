#include <iostream>

using namespace std;

int main(){

	int islem;

	cout << "İşlemi giriniz:";
	cin >> islem;

	switch(islem){

	case 1:
		cout << "1. İşlemi seçtiniz..." << endl;
		break;
	case 2:
		cout << "2. İşlemi seçtiniz..." << endl;
		break;
	case 3:
		cout << "3. İşlemi seçtiniz..." << endl;
		break;
	case 4:
		cout << "4. İşlemi seçtiniz..." << endl;
		break;
	default:
		cout << "Geçersiz işlem." << endl;
		break;
	}

	return 0;
}
