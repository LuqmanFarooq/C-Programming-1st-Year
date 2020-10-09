#include <iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);
int main()
{
	int a,b,c;
	cout<<"Enter value of a =";
	cin>>a;
	cout<<"Enter value of b =";
	cin>>b;
	cout<<"Enter value of c =";
	cin>>c;
	sum(a,b);
	sum(a,b,c);
}
int sum(int a,int b){
	int add;
	add=a+b;
	cout<<add<<endl;
}
int sum(int a,int b,int c){
	int add;
	add=a+b+c;
	cout<<add<<endl;
}
