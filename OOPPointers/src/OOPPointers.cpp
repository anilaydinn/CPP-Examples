#include<iostream>

using namespace std;

class Employee{

private:
	int id;
	string name;
	int salary;

public:

	Employee(){
		this->id = 0;
		this->name = "Bilgi Yok";
		this->salary = 0;
	}

	Employee(string name, int salary){
		this->name = name;
		this->salary = salary;
		this->id = 0;
	}

	Employee(int id, string name, int salary){
		this->id = id;
		this->name = name;
		this->salary = salary;
	}

	void setId(int id){
		this->id = id;
	}
	int getId(){
		return id;
	}
	void setName(string name){
		this->name = name;
	}
	string getName(){
		return this->name;
	}
	void setSalary(int salary){
		this->salary = salary;
	}
	int getSalary(){
		return this->salary;
	}

	void showInfos(){
		cout << "Id: " << this->id << endl;
		cout << "İsim: " << this->name << endl;
		cout << "Maaş: " << this->salary << endl;
	}
};

void deneme(Employee *ptr){
	ptr->showInfos();
}

int main(){

	Employee employee(12, "Anıl", 3000);

	deneme(&employee);

	return 0;
}
