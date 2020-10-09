#include <iostream>
using namespace std;
int main()
{
	char c;
	int a,b;
	int sum,sub,mul,div;
	cout<<"Enter 1st value =";
	cin>>a;
	cout<<"Enter + - * / ";
	cin>>c;
	cout<<"Enter second value =";
	cin>>b;
	
	if(c=='+'){
		sum=a+b;
		cout<<sum;
	}
	else if(c=='-'){
	sub=a-b;
	cout<<sub;
	}
	else if(c=='*'){
	mul=a*b;
	cout<<mul;
	}
	else if(c=='/'){
	div=a/b;
	cout<<div;
	}
	else
	cout<<"enter valid value";
}
