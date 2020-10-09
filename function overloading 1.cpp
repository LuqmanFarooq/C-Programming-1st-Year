#include <iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);

int main()
{
int a,b,c;
cout<<"enter value of a =";
cin>>a;
cout<<"enter value of b =";
cin>>b;
cout<<"enter value of c =";
cin>>c;
sum(a,b);
sum(a,b,c);	
}
int sum(int a,int b){
	int sum=a+b;
	cout<<sum<<endl;
	return 0;
}
int sum(int a,int b,int c){
	int sum=a+b+c;
	cout<<sum;
}

