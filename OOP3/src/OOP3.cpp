#include <iostream>

using namespace std;

class Employee{

private:
	string name;
	int age;

public:

	void setAge(int yas){
		if(yas < 0){
			cout << "Böyle bir değer veremezsiniz..." << endl;
			age = 0;
		}
		else{
			age = yas;
		}
	}
	int getAge(){
		return age;
	}
	void setName(string isim){
		name = isim;
	}
	string getName(){
		return name;
	}
};

int main(){

	Employee employee;

	employee.setName("Anıl");
	employee.setAge(-5);

	cout << employee.getName() << endl;
	cout << employee.getAge() << endl;

	return 0;
}
