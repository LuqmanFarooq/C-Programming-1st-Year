#include <iostream>
#include <math.h>
using namespace std;
int sum(int a, int b){
	int result=a+b;
	return result;}
int sub(int a, int b){
	int result=a-b;
	return result;}
int mul(int a, int b){
	int result=a*b;
	return result;}
int div(int a, int b){
	int result=a/b;
	return result;}

int main(){
	int a,b;
	char c,y;
	y='y';
	while(y=='y'){
	cout<<"enter 1st number =";
	cin>>a;
	cout<<"Enter +,-,*,/,press f for cos, t for tan, s for sin, l for log,q for sqrt, g for cbrt  ";
	cin>>c;
	cout<<"enter 2nd number =";
	cin>>b;
	
	if(c=='f'){
		cout<<cos(b);
	}
	if(c=='t'){
		cout<<tan(a);
	}
	if(c=='s'){
		cout<<sin(a);
	}
	if(c=='l'){
		cout<<log(a);
	}
	if(c=='q'){
		cout<<sqrt(a);
	}
	if(c=='g'){
		cout<<cbrt(a);
	}
	if(c=='+'){
	cout<<sum(a,b)<<endl;
}if(c=='-'){
	cout<<sub(a,b)<<endl;
}if(c=='*'){
	cout<<mul(a,b)<<endl;}
	if(c=='/'){
	cout<<div(a,b)<<endl;}
	cout<<"enter y to continue";
	cin>>y;
}
}
