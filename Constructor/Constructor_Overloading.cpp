#include <iostream>
#include <conio.h>

using namespace std;

class Rectangle{
	private:
	int width;
	int height;
	public:
		// Constructor overloadding declaration
		Rectangle();
		Rectangle(int , int); // seperate from top constructor
		void area(){
			int result = width*height;
			cout<<"Rectangle area is: "<<result<<endl;
		}	
	
	
};

Rectangle::Rectangle(){
	width = 5;
	height = 7;
}

Rectangle::Rectangle(int a, int b){ // take value from main function obj2(5,8);
	width =  a;
	height = b;
}

int main(){
	Rectangle obj1;
	obj1.area();
	Rectangle obj2(5,8);
	obj2.area();
	
	getch();
}
