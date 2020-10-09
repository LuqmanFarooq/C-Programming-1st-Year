#include <iostream>
using namespace std;
void cube(int a);

int main(){
	int b,d;
	cout<<"Enter Number =";
	cin>>b;
	cube(b);
	
}
void cube(int a){
    int d,b;
	d=a*a*a;
cout<<"cube of "<<a<<" is "<<d;
	
}
