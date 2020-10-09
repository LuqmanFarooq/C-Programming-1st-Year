#include <iostream>
using namespace std;
int sumarray(int a[],int b[],int c[]);

int main()
{
	int a1[3]={1,3,5};
	int a2[3]={2,4,6};
	int a3[3];
	sumarray(a1,a2,a3);
	
}
int sumarray(int a[],int b[],int c[]){
	for(int i=0;i<3;i++){
		c[i]=a[i]+b[i];
		cout<<c[i];
		
	}
}
