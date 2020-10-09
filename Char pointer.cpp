#include <iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter Any Character =";
	cin>>a;
	char *p;
	p=&a;
	cout<<*p;
}
