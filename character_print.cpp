#include <iostream>

using namespace std;

int main(){

char c;

int b;

int count=0;

cout <<endl<< endl;

for( c = 65 ; c <= 122 ; c = c + 1 ){

if( c > 90 && c < 97 )

continue;

b=int(c);

cout<<"|"<<c<<"-"<<b;

count++;

if(count%10==0)

cout <<endl;

}

//cout<<endl;

return 0;

}
