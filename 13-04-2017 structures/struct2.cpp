#include <iostream>
using namespace std;
struct stuattend{
	string name;
	string att;
};
int main()
{
	char n;
	stuattend s;
	n='y';
	int a=0;
	int b=0;
	while(n!='n'){
		cout<<"Enter Name ";
		cin>>s.name;
		cout<<"Enter Y for present and N for Absent ";
		cin>>s.att;
		b++;
		if(s.att=="y"){
			a++;
		}
		cout<<"Enter N to terminate the program ";
		cin>>n;
	}
	cout<<"Number of Present Students : "<<a<<endl;
	cout<<"total number of students : "<<b;
}
