#include <iostream>
using namespace std;
int square(int *p);

int main()
{
	int a;
	cout<<"enter number";
	cin>>a;
	square(&a);
}
int square(int *p){
	int b;
	b=(*p)*(*p);
	cout<<b;
}
