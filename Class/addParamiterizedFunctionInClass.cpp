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
		void setValue(int x, double y){
			id = x;
			gpa = y;
		}
};

int main(){
	
//	object create of Student Class

	Student prodip,Habib;
	prodip.setValue(101,3.50);
	prodip.display(); 

	

	Habib.setValue(102,4.50);
	Habib.display(); 
	

	
	getch();
}
