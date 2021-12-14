

#include <iostream>
#include <conio.h>

using namespace std;

	class Person{
		public:
		void display(){
			cout<< "I am a person\n";
		}
	};
	
	class Student: public Person{
		//			Function Overridding
		public:
		void display(){
			cout<< "I am a student\n";	
		}
	};
	
	class Teacher:public Person{
		public:
//			Function Overridding
		void display(){
			cout<< "I am a Teacher\n";	
		}
	};

int main(){
	
	Person p;
	Teacher t;
	Student s;
	p.display();
	t.display();
	s.display();
	getch();
}
