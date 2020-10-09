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
	cout<<"enter 1st number =";
	cin>>a;
	cout<<"enter 2nd number =";
	cin>>b;
	sub(a,b);
	sum(a,b);
	mul(a,b);
	div(a,b);
}
