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

	Student sdt;
	sdt.id = 101;
	sdt.gpa = 3.50;
	
	cout<< "Id :" <<sdt.id<<endl;
	cout<< "GPA:" <<sdt.gpa<<endl;
	

	
	getch();
}
