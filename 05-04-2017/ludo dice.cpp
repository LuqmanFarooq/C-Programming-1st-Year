#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int i,d,k,t,j;
	char s;
	int first,sec;
	srand(time(NULL));
while(true){
    cout<<"1st player press t to play ="<<endl;
    cin>>s;
    if(s=='t'){
	cout<<"play 1 turn"<<endl;
	i=rand()%6;
	first+=i;
	cout<<"Number 1st player ="<<first<<endl;
	}
	cout<<"2nd player press t to play ="<<endl;
    cin>>s;

    if(s=='t'){
    	cout<<"player 2 turn "<<endl;
	k=rand()%6;
	sec+=k;
	cout<<"Number 2nd player ="<<sec<<endl;
}
if(first>=20){
	cout<<"Player 1 winner";
	break;
}
else if(sec>=20){
	cout<<"player 2 wineer";
	break;
}
else{
	continue;
}
}
}
