#include <iostream>

using namespace std;

class Mathematic{

public:
	static void cube(int x){
		cout << x * x * x << endl;
	}
	static void add2(int x){
		cout << x + 2 << endl;
	}
};

int main(){

	Mathematic::cube(3);
	Mathematic::add2(20);

	return 0;
}
