#include <iostream>
using namespace std;
int main()
{
	int a[4]={3,1,7,4};
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++){
		if(a[j]<a[i]){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(int i=0;i<4;i++){
	cout<<a[i];
}
}
