#include <iostream>
using namespace std;
int main ()
{
	int a[3]={1,2,3};
	int b[3]={2,4,6};
	int c[3]={8,10,12};
	int *e[3];
	int *f[3];
	int *g[3];
	int d[3];
	for(int k=0;k<3;k++){
	e[k]=&a[k];
	f[k]=&b[k];
	g[k]=&c[k];
	}
	for(int i=0;i<3;i++){
		d[i]=*e[i]+*f[i]+*g[i];
		
}
	for(int j=0;j<3;j++){
	cout<<d[j]<<endl;	
	}
	
}
