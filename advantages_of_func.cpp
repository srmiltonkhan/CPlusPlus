//Function is a group of statement that perform specific task
//Same works are done by reducing code

#include <iostream>
#include <conio.h>

using namespace std;


void addition(int x, int y){
	int sum = x + y;
	cout<<sum<<endl;
}


int main(){
	//Calling function
	addition(10,20);
	addition(30,20);
	
	getch();
}
