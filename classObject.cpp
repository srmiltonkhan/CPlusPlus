#include <iostream>
#include <conio.h>

using namespace std;

class Student{
	public:
		int id;
		double gpa;
};

int main(){
	
	Student milton;
	
	milton.id = 201;
	milton.gpa = 3.80;
	
	cout<< "ID: "<<milton.id <<" GPA:"<<milton.gpa<<endl;
	
	return 0;
	getch();
}
