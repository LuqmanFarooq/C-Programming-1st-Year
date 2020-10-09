#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char s;
	ifstream admission;
	admission.open("details2k17.txt");
	while(!admission.eof()){
		admission.get(s);
		cout<<s;
	}
}
