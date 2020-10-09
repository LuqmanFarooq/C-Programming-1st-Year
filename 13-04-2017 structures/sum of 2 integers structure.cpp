#include <iostream>
using namespace std;
struct sum{
	int a;
	int b;
	int c;
};
int main(){
	sum s1;
	cout<<"Enter value of a =";
	cin>>s1.a;
	cout<<"Enter value of b =";
	cin>>s1.b;
	s1.c=s1.a+s1.b;
	cout<<s1.c<<endl;
}
