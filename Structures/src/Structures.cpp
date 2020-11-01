#include <iostream>

using namespace std;

struct Employee {

	int id;
	string name;
	string department;
};

int main(){

	Employee employee1 = {12,"Anıl Aydın","Yazılım Mühendisliği"};

	//employee1.name = "Ozan Aydın";

	//cout << employee1.name << endl;

	Employee *ptr = &employee1;

	cout << ptr->name << endl;

	return 0;
}
