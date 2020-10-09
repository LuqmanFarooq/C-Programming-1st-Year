#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char b[50];
	char a[50]="my name is Luqman";
	memcpy(b,a,strlen(a));
	cout<<b;
	
}
