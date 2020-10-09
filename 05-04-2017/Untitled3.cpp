#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int sort(int a[]){
		for(int i=99;i>0;i--){
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
}
int printarr(int b[]){
	for(int i=0; i<100; i++){
		cout<<b[i]<<" ";
}
}

int main()
{
int j[100];
srand(time(NULL));
for(int i=0;i<100;i++){
	j[i]=rand()%100;
	cout<<j[i]<<" ";
}
cout<<"\nsorted Array\n";
sort(j);
printarr(j);
}
