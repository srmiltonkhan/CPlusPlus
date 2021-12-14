//Using Protected we can access subclass of parent class's Protect data member

//public - members are accessible from outside the class
//private - members cannot be accessed (or viewed) from outside the class
//protected - members cannot be accessed from outside the class, however, they can be accessed in inherited class or sub class

// if user not defined access specifier then it will detected private

#include <iostream>
#include <conio.h>

using namespace std;

class Student{ // student class declaration
	private: // Access Specefier
		int id = 101; // data memeber under public specefier
		string name = "Milton Khan"; // data memeber under public specefier
	public:
	void display(){
		cout<< "Student ID: "<<id<<endl;
		cout<< "Student Name: "<<name<<endl;
	}	
};

int main(){
	
	Student obj;
	obj.display();
	//cout<<"Student Name: "<<obj.name<<endl;
	
	getch();
}
