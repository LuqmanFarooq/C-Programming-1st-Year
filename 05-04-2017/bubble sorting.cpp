#include <iostream>
using namespace std;
void BubbleSort(int num[]);
int main()
{
int a[6]={4,8,6,2,1,5};
for(int i=0;i<6;i++){
	for(int j=i;j<6;j++){
		if(a[j]<a[i]){
			int b=a[i];
			a[i]=a[j];
			a[j]=b;
		}
	}
	
}
for(int i=0;i<6;i++){
	cout<<a[i];

}}

