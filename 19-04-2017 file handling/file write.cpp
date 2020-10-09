#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream file;
	file.open("Data.txt");
	string s;
	getline(cin,s);
	
	file<<s<<endl;
	file.close();
	cout<<"file closed"<<endl;
}
