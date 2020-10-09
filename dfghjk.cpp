#include<iostream>
using namespace std;
int main()
{
	int *p,*q;
	int a,b;
	
	cin>>a;
	p=&a;
	
	cin>>b;
	q=&b;
	
	int sum=(*p)+(*q);
		cout<<" "<<sum;
	
	}

