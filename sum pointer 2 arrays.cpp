#include <iostream>
using namespace std;
int main()
{
	int a[3]={1,3,5};
	int b[3]={2,4,6};
	int *c[3],*d[3];
	for(int i=0;i<3;i++){
		c[i]=&a[i];
	}
	for(int j=0;j<3;j++){
		d[j]=&b[j];
	}
    int sum;
	for(int j=0;j<3;j++){
		sum+=(*c[j])+(*d[j]);
	}
	cout<<sum;
}
