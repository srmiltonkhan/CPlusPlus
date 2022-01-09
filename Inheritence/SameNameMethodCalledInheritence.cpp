#include <iostream>

using namespace std;

class Parent{
	public:
		string name;
		void display(){
			cout<< "Parent Name is: "<<name<<endl;
		}
};

class Child: public Parent{
	public:
		string name;
		void display(){
			cout<< "Child Name is: "<<name<<endl;
		}
};

int main(){
	Child c;
	c.Parent::name = "Milton Khan";
	c.Parent::display(); //  accessing parent class method

}
