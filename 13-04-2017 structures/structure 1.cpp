#include <iostream>
using namespace std;

struct student{
	string name;
	int rollno;
	int batch;
};
void printstruct(student st);
int main()
{
	student  s1;
	cout<<"name of 1st student =";
	cin>>s1.name;
	cout<<"batch of 1st student =";
	cin>>s1.batch;
	cout<<"roll no of 1st student =";
	cin>>s1.rollno;
    printstruct(s1);

student  s2;
	cout<<"name of 2nd student=";
	cin>>s2.name;
	cout<<"batch of 2nd student =";
	cin>>s2.batch;
	cout<<"roll no of 2nd student =";
	cin>>s2.rollno;
    cout<<"Name of 2nd student ="<<s2.name<<endl;
cout<<"Roll no of 2nd student ="<<s2.rollno<<endl;
cout<<"Batch of 2nd student ="<<s2.batch;
}
void printstruct(student st){
	cout<<st.name<<endl;
	cout<<st.batch<<endl;
	cout<<st.rollno<<endl;
	
}


