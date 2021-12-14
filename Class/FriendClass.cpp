#include <iostream>
#include <conio.h>

using namespace std;

class ParentClass{
	private: 
		int id = 101;
		string name = "Milton";
		
	public:
		friend class FriendClass;
};

class FriendClass{
	public:
	void display(ParentClass pob){
		cout<< "Id: "<<pob.id<<endl;
		cout<< "Name: "<<pob.name<<endl;
	}
};

int main(){
	
	ParentClass pobj;
	FriendClass fobj;
	fobj.display(pobj);
	getch();
}
