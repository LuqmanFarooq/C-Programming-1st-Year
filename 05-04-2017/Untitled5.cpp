#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int i,s;
	srand(time(NULL));
	i=rand()%10;
	cout<<"enter number between 1-10 =";
	cin>>s;
	if(s<i)
	{
		cout<<"too low";
	}
	else if(s>i)
	{
	cout<<"too high";
    }
}
