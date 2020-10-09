#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[50]="my name is luqman";
	char b[50];
	memmove(b,a,strlen(a));
	cout<<b;
}
