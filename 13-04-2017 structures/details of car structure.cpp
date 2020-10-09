#include <iostream>
using namespace std;
struct cardetails{
	string make;
	string model;
	int yearofpurchase;
	string registrationno;
	string colour;
};
int main(){
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
	
	cout<<c1.make<<endl;
	cout<<c1.model<<endl;
	cout<<c1.yearofpurchase<<endl;
	cout<<c1.registrationno<<endl;
	cout<<c1.colour;
	file<<c1<<endl;
	file.close();
	cout<<"file closed"<<endl;
}
