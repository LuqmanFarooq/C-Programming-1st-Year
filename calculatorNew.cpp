#include<iostream>
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
	cout<<"Enter +-*/  ";
	cin>>c;
	cout<<"enter 2nd number =";
	cin>>b;
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
