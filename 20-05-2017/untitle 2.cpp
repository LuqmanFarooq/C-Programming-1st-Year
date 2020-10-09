#include <iostream>
#include <string.h>
#incude <fstream>
using namespace std;
int main()
{
	ifstream tokenize;
	tokenize.open("tokenize");
	char * a;
	string show="";
	char b[]="this is a sample string bomb attack";
	cout<<b<<endl;
	a = strtok (b," ,;");
	while(a !=NULL){
	string s=a;
	if(s=="bomb"){
    	show+=s+" ";
	}
	else if(s=="blast"){
		show+=s+" ";
	}
	else if(s=="terror"){
		show+=s+" ";
	}
	else if(s=="attack"){
		show+=s+" ";
	}
	cout<<a<<endl;
    a = strtok (NULL, " ");
  }
  
  cout<<"Words found"<<endl;
  cout<<show;
  
  return 0;	
	}
		


