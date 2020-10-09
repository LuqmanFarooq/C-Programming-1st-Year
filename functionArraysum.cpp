#include <iostream>
using namespace std;
int sumarr(int a[5]);

int main()
{
	int a[5]={1,3,5,7,9};
	sumarr(a);
}
int sumarr(int a[5])
{
	int sum=0;
	for(int i=0;i<5;i++){
	sum+=a[i];
	}
	
	cout<<sum;
	
	return 0;
}

