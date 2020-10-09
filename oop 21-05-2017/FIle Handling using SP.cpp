#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream Student;
	Student.open("Walli.txt");
	char Report[1000];
	while(!Student.eof())
	{
		Student.getline(Report,1000);
		cout<<Report;
	}
	Student.close();
	
	char *p;
    string result="";
    char str[1000];
	p=strtok(Report," ,.;");
    while(p !=NULL)
    {
    	string s=p;
    	if(s=="bad")
    	{
    		result+=s+" ";
		}
		else if(s=="naughty")
		{
			result+=s+" ";
		}
	p=strtok(NULL," ,.;");	
	}
	cout<<endl<<"words Found"<<endl;
	cout<<result;
    return 0;	
}
