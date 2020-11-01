#include <iostream>

using namespace std;

class Employee{

private:
	int id;
	string name;
	int salary;

public:

	Employee(){
		this->name = "Bilgi Yok";
		this->salary = 0;
		this->id = 0;
	}
	/*
	Employee(string name, int salary){
		this->name = name;
		this->salary = salary;
		this->id = 0;
	}

	Employee(int id,string name, int salary){
		this->id = id;
		this->name = name;
		this->salary = salary;
	}
	 */
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
		return name;
	}
	void setSalary(int salary){
		this->salary = salary;
	}
	int getSalary(){
		return salary;
	}
	void showInfos(){
		cout << "ID: " << this->id << endl;
		cout << "İsim: " << this->name << endl;
		cout << "Maaş: " << this->salary << endl;
	}
};

int main(){

	//Employee employee1(1,"Anıl",3000);
	//Employee employee2("Ozan", 5000);
	Employee employee3;

	//employee1.showInfos();
	//employee2.showInfos();
	employee3.showInfos();

	return 0;
}
