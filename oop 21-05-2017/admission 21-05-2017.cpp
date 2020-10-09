#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string x;
	int y,z;
	ofstream admission;
	admission.open("details2k17.txt");
	cout<<"enter details of students ="<<endl;
	cout<<"Name =";
	cin>>x;
	cout<<"enter rollno =";
	cin>>y;
	cout<<"enter class =";
	cin>>z;
	admission<<x<<endl;
	admission<<y<<endl;
	admission<<z;
	admission.close();
	cout<<"file closed and overwrite";
}
