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
	ofstream file;
	file.open("student records.txt",ios::app);
	student  s1;
	string date;
	char y,n,ans;
	cout<<"\t\t\t\t\t\tStudent records"<<endl;
	file<<"\t\t\t\t\t\tStudent records"<<endl;
	cout<<"enter date :";
	cin>>date;
	file<<"date: "<<date<<endl;
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
	
	file<<s1.name<<endl;
	file<<s1.Class<<endl;
	file<<s1.rollno<<endl;
	
}

file.close();
cout<<"file closed";
}
