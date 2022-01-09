#include <iostream>

using namespace std;


class A{
	public:
	A(){
		cout<< "Call From A Class"<<endl;
	}
};

class B: public A{
	public:
		B(){
			cout<< "Call from B Class"<<endl;
		}
};

class C: public B{
	public:
		C(){
			cout<< "Call from C"<<endl;
		}
};


int main(){
	C c;
	
}
