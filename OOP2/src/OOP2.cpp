#include <iostream>

using namespace std;

class Student{

public:
	string name;

	void tellName(){
		cout << "Benim adım " << name << endl;
	}

};

int main(){

	Student student1;
	Student student2;

	student1.name = "Anıl";
	student2.name = "Ozan";

	student1.tellName();
	student2.tellName();

	return 0;
}
