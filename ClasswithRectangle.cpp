#include <iostream>
#include <conio.h>

using namespace std;

class Rectangle{
	int width, height;
	public:
		void set_values(int,int);
		int area(){
			return width*height;
		}
};

void Rectangle::set_values(int x, int y){
	width = x;
	height = y;
}

int main(){
	Rectangle react;
	react.set_values(5,6);
	cout<<"Rectangle Area: "<<react.area();
	return 0;
}
