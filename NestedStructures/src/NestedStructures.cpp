#include <iostream>

using namespace std;

struct Address{
	string cityName;
	int no;
};

struct Employee {
	int id;
	string name;
	string department;
	Address address;
};

int main(){

	Employee employee = {12,"Anıl Aydın","Yazılım",{"Edirne",12}};

	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl;
	cout << employee.address.cityName << endl;
	cout << employee.address.no << endl;

	return 0;
}
