#include <iostream>
using namespace std;
int printarray(int a[]);
int printarray(int a[],int b[]);

int main()
{
	int a[3],b[3],c[3];
	for(int i=0;i<3;i++){
	cout<<"enter array 1 ";
	cin>>a[i];
	}
	for(int j=0;j<3;j++){
	cout<<"enter array 2 ";
	cin>>a[j];
	}
	printarray(a);
	printarray(a,b);
}
int printarray(int a[]){
	for(int i=0;i<3;i++){
		cout<<a[i];}
		cout<<endl;
		return 0;
	
}
int printarray(int a[],int b[]){
    for(int i=0;i<3;i++){
		cout<<a[i];
		}
		cout<<endl;
	for(int j=0;j<3;j++){
		cout<<b[j];
		}
		cout<<endl;
		return 0;
	}
