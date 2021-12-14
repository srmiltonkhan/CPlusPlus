//Method is a function that belongs to class
//there are two ways to define fucntions that belongs to class

//1. inside class definition
//2. outside class definition

#include <iostream>
#include <conio.h>

using namespace std;

class Person{ // Class declaration with Capatialize

 public: 
 	void name(){	  //Method defined with milton value within class
	cout<< "Milton"<<endl;
}	
};

int main(){

	Person p; //creating object p of person class
	p.name();//call method using p object

	return 0;
}


