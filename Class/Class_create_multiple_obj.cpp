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
};

int main(){
	
//	object create of Student Class

	Student Habib, Milton; 
	
	Habib.id = 101; //call data memeber of Student Class by using std object.
	Habib.gpa = 3.50;
	
	cout<< "Id :" <<Habib.id<<endl;
	cout<< "GPA:" <<Habib.gpa<<endl;
	
	Milton.id = 102; //call data memeber of Student Class by using std object.
	Milton.gpa = 4.50;
	
	cout<< "Id :" <<Milton.id<<endl;
	cout<< "GPA:" <<Milton.gpa<<endl;
	

	
	getch();
}
