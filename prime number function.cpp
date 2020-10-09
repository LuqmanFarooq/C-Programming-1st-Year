#include <iostream>
using namespace std;
bool pnumber(int a);

int main(){
	int c;
	cout<<"Enter number =";
	cin>>c;
	bool i=pnumber(c);
	if(i==true){
		cout<<"prime";
	}else
	cout<<"NOt prime";
}
bool pnumber(int a){
	for(int i=a-1; i>1; i--){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
