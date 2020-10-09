#include <iostream>
using namespace std;
int main()
{
	int a[3];
for(int i=0;i<3;i++){
	cout<<"enter array value =";
	cin>>a[i];
}
int *b[3],sum=0;
for(int j=0; j<3; j++){
	b[j]=&a[j];
}
for(int j=0; j<3; j++){
	sum+=*b[j];
}
cout<<"sum : "<<sum;
}
