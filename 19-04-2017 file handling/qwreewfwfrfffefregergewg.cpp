#include <iostream>
#include <fstream>
using namespace std;
struct student{
	string name;
	int rollno;
	int Class;
};
int main()
{
	student  s1;
	
	char y,n,ans;
	cout<<"\t\t\t\t\t\tStudent records"<<endl;
	while(ans=='y'||ans!='n'){
		cout<<"Enter name of student =";
	cin>>s1.name;
	cout<<"Enter Class of student =";
	cin>>s1.Class;
	cout<<"Enter roll no of student =";
	cin>>s1.rollno;
		cout<<"Enter y to continue or n to end =";
		cin>>ans;
		cout<<s1.name<<endl;
	cout<<s1.Class<<endl;
	cout<<s1.rollno<<endl;
}

}
