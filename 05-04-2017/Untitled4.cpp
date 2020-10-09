#include <iostream>
using namespace std;
int main()
{
	int a;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"enter value =";
	cin>>a;
	for(int i=0;i<10;i++){
		if(a=arr[i]){
			cout<<i;
		}
	}
}
