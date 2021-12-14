// special type of function that helps to initialize object

#include <iostream>
#include <conio.h>

using namespace std;

class Student{ // class will be Capitilize
//	Access specifier
	public:
	//Property/members declaration of Student class
	int id; 
	double gpa;
	
		void display(){
			cout<<"ID: "<<id<<endl;
			cout<<"GPA: "<<gpa<<endl;
		}
};

int main(){
	
//	object create of Student Class

	Student rasel,habib; 
	// declaration id and gpa value using objFunc
	rasel.id = 101;
	rasel.gpa = 3.50;
	// call display function using objFunc object for display
	rasel.display();
	
		// declaration id and gpa value using objFunc
	habib.id = 102;
	habib.gpa = 4.50;
	// call display function using objFunc object for display
	habib.display();
	

	

	
	getch();
}
