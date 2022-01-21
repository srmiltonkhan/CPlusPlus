#include <iostream>

using namespace std;


enum week {
	Saturday, Sunday, Monday, Twesday, Wednesday, thirsday, Friday
};

int main(){
	week w;
	w=Saturday;
	cout<< "Saturday = " << w <<endl;
	
	w=Sunday; // case sensative 
	cout<< "Sunday = " << w <<endl;
}
