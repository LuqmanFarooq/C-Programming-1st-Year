#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *b;
	b=&a;
	
	cout<<&a<<" a"<<endl;
	cout<<b<<" b"<<endl;
	
	cout<<a<<"value"<<endl;
	cout<<*b<<"value"<<endl;
	
	cout<<++a<<endl;
	cout<<++b;
}
