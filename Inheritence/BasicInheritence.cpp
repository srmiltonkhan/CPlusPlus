//1. The process of obtaining the data memebers and function from one class to another class is called inheritench

//Advantages of Inheritence
//1. Code reusability
//2. Application development time is less
//3. Application take less memory
//4. Application execution time is less


#include <iostream>

using namespace std;


class Person{
	
	public:
		string name;
		int age;
		
		void display1(){
			cout<< "Name: "<<name<<endl;
			cout<< "age: "<<age<<endl;
		}
};

class Student: public Person{
	public:
		
		int id;
		
		void display(){
			cout<< "ID: " <<id<<endl;
		}
};



int main(){
	
	Student stud;
	
	stud.id = 101;
	stud.name = "Milton";
	stud.name = "20";
	
	
	stud.display();
	stud.display1();
}
