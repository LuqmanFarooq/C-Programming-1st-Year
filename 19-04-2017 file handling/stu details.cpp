#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char a;
ifstream studetails;
studetails.open("studetails.txt");
ofstream file;
file.open("studetailscopy");
 if(studetails.is_open()){
 	while(studetails.eof()){
 		studetails.get(a);
 		cout<<a;
 		file<<a;
	 }
	 studetails.close();
	 file.close();
 }
 else 
	 cout<<"cant open";
 cout<<"file closed"<<endl;
}
