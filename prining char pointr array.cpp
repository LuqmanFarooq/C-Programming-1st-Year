#include <iostream>
using namespace std;
int main()
{
	char a[3]={'d','f','g'};
	char *p[3];
	for(int i=0;i<3;i++){
	p[i]=&a[i];
	cout<<a[i]<<endl;
}	
}
