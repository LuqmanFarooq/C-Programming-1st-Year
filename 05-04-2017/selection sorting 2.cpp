#include <iostream>
using namespace std;
int main()
{
	int a[6]={6,4,1,3,9,7};
	for(int i=6;i>0;i--){
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
	for(int i=0;i<6;i++){
		cout<<a[i];
	}
}
