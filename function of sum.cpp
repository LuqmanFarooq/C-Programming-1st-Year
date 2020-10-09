#include <iostream>
using namespace std;
int sum(int a, int b, int c);

int main(){
	int c,j,k,s;
	cout<<"enter 1st number =";
	cin>>c;
	cout<<"enter 2nd number =";
	cin>>j;
	cout<<"enter 3rd number";
	cin>>k;
	s=sum(c,j,k);
	cout<<s;
}

int sum(int a, int b, int c){
	int s=a+b+c;
	return s;
}
