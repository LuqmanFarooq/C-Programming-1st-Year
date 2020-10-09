#include <iostream>
using namespace std;
int square(int *a);
int main()
{
	int a;
	cout<<"enter value of a =";
	cin>>a;
	int *b;
	b=&a;
	square(&a);
	
}
int square(int *a){
	
	cout<<(*a)*(*a);
}
