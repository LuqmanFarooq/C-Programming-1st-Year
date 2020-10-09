#include <iostream>
using namespace std;
int main()
{
	int a1[4]={1,3,5,7};
	
	int suma1=0;
	int suma2=0;
	for(int i=0;i<4;i++){
		suma1=suma1+a1[i];
}

	int a2[4]={2,4,6,8};
	
	for(int j=0;j<4;j++){
		suma2=suma2+a2[j];
}
	int total;
	total=suma1+suma2;
	cout<<total;
	
}
