#include <iostream>
using namespace std;
int sub(int a, int b);

int main(){
	int c,j,s;
	cout<<"enter 1st number =";
	cin>>c;
	cout<<"enter 2nd number =";
	cin>>j;
	s=sub(c,j);
	cout<<s;
}

int sub(int a, int b){
	int s=a-b;
	return s;
}
