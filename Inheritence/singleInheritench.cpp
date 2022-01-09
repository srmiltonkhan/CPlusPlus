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
};

class Student: public Person{

	public: 
		void display(){
			cout<< "Name: " <<name <<endl;
			cout<< "Age: "<<age  <<endl;
		}

};



int main(){
	
	Student stud;
	
	stud.name = "Milton";
	stud.age = 10;
	
	stud.display();
	
	
}
