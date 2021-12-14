//1. Construction is a special type function
//2. It sets object value
//3. Constructor name is same class name
//4. There is no return type
//5. Constructor call automatically


#include <iostream>
#include <conio.h>

using namespace std;

class Student{
	public:
		int id;
		double gpa;
		
		void display(){
			cout<<"Id: "<<id<<endl;
			cout<<"GPA: "<<gpa<<endl;
		}
		Student(int x, double y){
			id = x;
			gpa = y;
		}
};

int main(){
	Student obj(101,3.50);
	obj.display();
	getch();
}
