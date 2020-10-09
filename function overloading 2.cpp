#include <iostream>
using namespace std;
int mul(int a,int b);
int mul(int a,int b,int c);

int main()
{
	int a,b,c;
	cout<<"enter value of a =";
	cin>>a;
	cout<<"enter value of b =";
	cin>>b;
	cout<<"enter value of c =";
	cin>>c;
	mul(a,b);
	mul(a,b,c);
}
int mul(int a,int b){
	int total;
	total=a*b;
	cout<<total<<endl;
	return 0;
}
int mul(int a,int b,int c){
	int total;
	total=a*b*c;
	cout<<total<<endl;
}
