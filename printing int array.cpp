#include <iostream>
using namespace std;
int array(int a[]);

int main()
{
	int a[]={2,4,6,8,10,12,14,16};
	int b[];
	array(a);
	cout<<endl;
}
int array(int a[]){
	for(int i=0;i<8;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
