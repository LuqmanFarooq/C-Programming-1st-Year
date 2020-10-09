#include <iostream>
using namespace std;
int div(int a, int b);

int main(){
	int c,j,result;
	cout<<"enter 1st number =";
	cin>>c;
	cout<<"enter 2nd number =";
	cin>>j;
	result=div(c,j);
	cout<<result;
}

int div(int a, int b){
	int result=a/b;
	return result;
}
