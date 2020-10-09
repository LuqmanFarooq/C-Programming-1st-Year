#include <iostream>
using namespace std;
struct sum{
	int value1;
	int value2;
};
void print(sum t);
int main()
{
	sum a;
	cout<<"enter 1st value =";
	cin>>a.value1;
	cout<<"enter 2nd value =";
	cin>>a.value2;
	print(a);
}
void print(sum t){
	int s=0;
	s=t.value1+t.value2;
	cout<<s;
}
