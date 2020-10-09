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

int sort1(int a[]){
	for(int i=0;i<99;i++){
	for(int j=i;j<99;j++){
		if(a[j]<a[i]){
			int b=a[i];
			a[i]=a[j];
			a[j]=b;
}
}
}
}
int printarr(int b[]){
	for(int i=0; i<100; i++){
		cout<<b[i]<<endl;
	}
}
		int main()
{
int j[100];
srand(time(NULL));
for(int i=0;i<100;i++){
	j[i]=rand()%100;
	cout<<j[i]<<endl;
}
sort1(j);
cout<<"bubble sort"<<endl;
printarr(j);
cout<<endl;
int k[100];
srand(time(NULL));
for(int i=0;i<100;i++){
	k[i]=rand()%100;
	cout<<k[i]<<endl;
}
sort(k);
cout<<"selection sort"<<endl;
printarr(k);
}
