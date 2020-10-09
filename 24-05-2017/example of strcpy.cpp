#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[50]="this is a sample string to be copied";
	char b[50];
	char c[50]="successfully copied";
	strcpy(b,a);
	cout<<b<<endl<<c;
}
