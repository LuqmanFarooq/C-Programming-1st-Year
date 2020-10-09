#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of array =";
	cin>>a;
	int b[a];
	for(int c=0;c<a;c++){
		cin>>b[c];
	}
	for(int c=0;c<a;c++){
		cout<<b[c];
	}
}
