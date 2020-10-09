#include<iostream>
#include <string.h>
using namespace std;

int main ()
{
	char * pch;
	string show="";
  	char str[] ="This is a sample string bomb terror";
  cout<<str<<endl;
  pch = strtok (str," ");
  while (pch != NULL)
  {
    string s=pch;
    if(s=="bomb"){
    	show+=s+" ";
	}
	else if(s=="blast"){
		show+=s+" ";
	}
	else if(s=="terror"){
		show+=s+" ";
	}
	cout<<pch<<endl;
    pch = strtok (NULL, " ");
  }
  
  cout<<"Words found"<<endl;
  cout<<show;
  
  return 0;
}
