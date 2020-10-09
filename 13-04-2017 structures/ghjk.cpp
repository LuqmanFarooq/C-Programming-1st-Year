#include <iostream>
using namespace std;
struct student
{
	string name;
	int batch;
	int rollno;
};
void printstruct(student s1);
int main()
{
	student s1;
	cin>>s1.name;
	cin>>s1.rollno;
	cin>>s1.batch;
	printstruct(s1);
}
void printstruct(student s1)
{
	cout<<"Name ="<<s1.name<<endl;
	cout<<"Roll no ="<<s1.rollno<<endl;
	cout<<"Batch ="<<s1.batch;
}
