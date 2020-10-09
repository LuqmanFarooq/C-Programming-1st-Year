#include <iostream>
#include <fstream>

using namespace std;
struct cardetails{
	string make;
	string model;
	int yearofpurchase;
	string registrationno;
	string colour;
};
int main()
{
	ofstream file;
	file.open("car details.txt");
		cardetails c1;
	cout<<"Enter make of car :";
	cin>>c1.make;
	cout<<"Enter model of car :";
	cin>>c1.model;
	cout<<"Enter year of purchase of car :";
	cin>>c1.yearofpurchase;
	cout<<"Enter registration no of car :";
	cin>>c1.registrationno;
	cout<<"Enter colour of car :";
	cin>>c1.colour;
	//printing on screen
	cout<<c1.make<<endl;
	cout<<c1.model<<endl;
	cout<<c1.yearofpurchase<<endl;
	cout<<c1.registrationno<<endl;
	cout<<c1.colour<<endl;
	//saving in file
	file<<"make of car is :"<<c1.make<<endl;
	file<<"model of is :"<<c1.model<<endl;
	file<<"year of purchase of car is :"<<c1.yearofpurchase<<endl;
	file<<"registration number of car is :"<<c1.registrationno<<endl;
	file<<"colour of car is :"<<c1.colour<<endl;
	file.close();
	cout<<"file closed"<<endl;
}
