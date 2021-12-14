#include <iostream>
#include <conio.h>

using namespace std;


//	Functioin Overloadding 
//1. Parameter different
//2. Function used in same class or in a class
//3. There is not need inheritence
//4. One function can not hide another function
//5. Return type may or may not same
	
class overloading{
	public: 
		void add(int a, int b){
			cout<< a+b <<endl;
		}
		void add(int a, int b, int c){
			cout<< a+b+c <<endl;
		}		
		void add(){
			cout<< "Nothing to add";
		}	
};	
int main(){
	
	overloading ovr;
	ovr.add(2,5);
	ovr.add(2,5,8);
	ovr.add();


	
	getch();
}
