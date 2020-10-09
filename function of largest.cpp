#include <iostream>
using namespace std;
void largest(int a,int b);

int main(){
	int c,d;
	cout<<"enter 1st number =";
	cin>>c;
	cout<<"enter 2nd number =";
	cin>>d;
	
	largest(c,d);
}
void largest(int a,int b){
	if(a>b){
		cout<<a<<" is greater";
	}
	else
	cout<<b<<" is greater";
}
	

