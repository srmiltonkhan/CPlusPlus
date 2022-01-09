#include <iostream>

using namespace std;


class A{
	public:
		A(){
			cout<< "A is constructor of A class"<<endl;
		}
};

class B: public A{
	
};

class C: public A{
	
};
int main(){
	B c;

}
