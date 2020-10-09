#include <iostream>
using namespace std;
int sum(int *a,int *b);
int main()
{
	int j,k;
	cout<<"Enter value of j =";
	cin>>j;
	cout<<"Enter value of k =";
	cin>>k;
	sum(&j,&k);	
}
int sum(int *a,int *b){
	int c;
	c=(*a)+(*b);
	cout<<c;
}
