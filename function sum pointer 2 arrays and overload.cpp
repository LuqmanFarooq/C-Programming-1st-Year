#include <iostream>
using namespace std;
void sum(int *a,int *b);
void sum(int *a,int *b,int *c);
int main()
{
	int a[3];
	int b[3];
	int c[3];
	
	for(int i=0;i<3;i++){
		cout<<"enter values of a =";
		cin>>a[i];
	}
	for(int j=0;j<3;j++){
		cout<<"enter values of b =";
		cin>>b[j];
	}
	for(int k=0;k<3;k++){
		cout<<"enter values of c =";
		cin>>c[k];
	}
	sum(&a,&b);
	sum(&a,&b,&c);
}
void sum(int *a,int *b){
	int t1;
	t1=(*a)+(*b);
	cout<<t1;
}
void sum(int *a,int *b,int *c){
	int t2;
	t2=(*a)+(*b)+(*c);
	cout<<t2;
}
