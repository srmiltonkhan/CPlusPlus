#include <iostream>

using namespace std;

class Employee{
	
	public: 
		float salary;
		
};

class Developer: public Employee{
	public:
		void display(){
			
			cout<< "Type your salary: "<<endl;
			cin>>salary;
			cout<< "Your salary is: " <<salary <<endl;
		}
};

int main(){
	Developer dl;
	dl.display();
	
	Employee e;
	e.salary = 30000;
	cout<< "Now salary is: " <<e.salary <<endl;	
}
