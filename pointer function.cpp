#include <iostream>
using namespace std;
void square(int *p)
{
	int b;
	b=(*p)*(*p);
	cout<<b;
	
	
}
int main()
{
	int a;
	cout<<"Enter Number =";
	cin>>a;
	square(&a);
	
}
