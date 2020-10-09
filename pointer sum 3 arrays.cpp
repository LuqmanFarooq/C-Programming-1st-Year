#include <iostream>
using namespace std;
int main()
{
	int a1[4]={1,3,5,7};
	int *a[4];
	
	int suma=0;
	int sumb=0;
	int sumc=0;
	for(int i=0;i<4;i++){
		a[i]=&a1[i];
		suma+=*a[i];
}
	int a2[4]={2,4,6,8};
	int *b[4];
	
	for(int j=0;j<4;j++){
		b[j]=&a2[j];
		sumb+=*b[j];
}
int a3[4]={12,14,16,18};
	int *c[4];
	
	for(int k=0;k<4;k++){
		c[k]=&a3[k];
		sumc+=*c[k];
	}
	int total;
	total=suma+sumb+sumc;
	cout<<total;
	
}
