#include <iostream>
using namespace std;
struct student{
	int rollno;
	string name;
};
void print(student st);
int main()
{
	student s1;
	cout<<"Enter name of 1st student =";
	cin>>s1.name;
	cout<<"Enter roll no of 1st student =";
	cin>>s1.rollno;
	print(s1);
	student s2;
	cout<<"Enter name of 2nd student =";
	cin>>s2.name;
	cout<<"Enter roll no of 2nd student =";
	cin>>s2.rollno;
	print(s2);
}
void print(student st){
	cout<<st.name<<endl;
	cout<<st.rollno<<endl;
}
