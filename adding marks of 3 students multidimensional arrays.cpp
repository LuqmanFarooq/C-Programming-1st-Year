#include <iostream>
using namespace std;
int main()
{
	int sum[5];
	int a[3][5];
	int total,total2[5];
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
		cout<<"enter marks of student "<<i+1<<" = ";
		cin>>a[i][j];
	}
	}
	for(int i=0;i<1;i++){
		for(int j=0;j<5;j++){
			total+=a[i][j];
		}
	}
	
	for(int i=1;i<2;i++){
		for(int j=0;j<5;j++){
			total2[j]+=a[1][j];
		}
	}
	
	cout<<"Total:"<<total;
	cout<<"Total  2:"<<total2;
}
