#include <iostream>

using namespace std;

class A{
	public:
	A(){
		cout<< "Custructor of A Class"<<endl;
	}
};

class B{
	public:
	B(){
		cout<< "Constructor of B class"<<endl;
	}
};

class C: public A, public B{
	public:
	C(){
		cout<< "Constructor of C class"<<endl;
	}
};

int main(){
	C c;
}
