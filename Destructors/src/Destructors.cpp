#include <iostream>

using namespace std;

class Employee{

public:

	string *s;
	int *i;

	Employee(string str, int ivalue){
		s = new string;
		i = new int;

		*s = str;
		*i = ivalue;
	}

	~Employee(){
		delete s;
		delete i;
		cout << "Destructor çağırıldı " << endl;
	}

	void show(){
		cout << "String değer: " << *s << " " << "Int değer: " << *i << endl;
	}
};

int main(){

	Employee *emp = new Employee("Anıl",25);

	emp->show();

	delete emp;

	return 0;
}
