#include <iostream>

using namespace std;

struct Employee{
	int id;
	string name;
	string department;
};

void showEmployee(Employee employee){

	employee.id = 30;
	cout << "Id: " << employee.id << endl;
	cout << "İsim: " << employee.name << endl;
	cout << "Departman: " << employee.department << endl;
}

void show(Employee *employee){

	employee->id = 30;
	cout << "Id : " << employee->id << endl;
	cout << "Name : " << employee->name << endl;
	cout << "Departman : " << employee->department << endl;
}

int main(){

	Employee employee1 = {12,"Anıl Aydın","Yazılım"};

	showEmployee(employee1);
	cout << employee1.id << endl;

	show(&employee1);
	cout << employee1.id << endl;

	return 0;
}
