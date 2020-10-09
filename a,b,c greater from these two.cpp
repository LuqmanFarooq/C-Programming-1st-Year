#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	
		cout<<"enter 1st value =";
		cin>>a;
	
	
		cout<<"enter 2nd value =";
		cin>>b;
	
	
		cout<<"enter 3rd value =";
		cin>>c;
	if(a>b&&a>c){
		cout<<a<<" is greater";
	}
	if(b>a&&b>c){
		cout<<b<<" is greater";
	}
	if(c>a&&c>b){
		cout<<c<<" is greater";
	}
}
