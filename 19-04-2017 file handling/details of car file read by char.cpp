#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream cardetails2;
	char s;
	cardetails2.open("car detais.txt");
	cardetails2>>s;
	cout<<s;
	cardetails2.close();
}
