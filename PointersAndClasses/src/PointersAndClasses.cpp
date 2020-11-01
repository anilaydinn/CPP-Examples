#include <iostream>

using namespace std;

class Employee{

private:
	string name;
	int age;

public:
	void setAge(int yas){
		if(yas < 0){
			cout << "Böyle bir değer giremezsiniz.." << endl;
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

	Employee *employee = new Employee();

	employee->setName("Anıl");
	employee->setAge(22);

	cout << employee->getName() << endl;
	cout << employee->getAge() << endl;

	return 0;
}
