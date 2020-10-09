#include <iostream>
using namespace std;
int main()
{
	int a[7]={2,5,9,6,8,1,3};
	for(int i=7;i>0;i--){
		int first=0;
		for(int j=1;j<=i;j++){
			if(a[first]<a[j]){
				first=j;
			}
			int temp=a[first];
			a[first]=a[i];
			a[i]=temp;
		}
	}
	for(int i=0;i<7;i++){
		cout<<a[i];
	}
}
