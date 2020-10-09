#include <iostream>
using namespace std;
void same(string a,string b);

int main(){
	string a,b;
	cout<<"enter 1st word =";
	cin>>a;
	cout<<"enter 2nd word =";
	cin>>b;
	same(a,b);
}
void same(string a,string b){
	if(a==b){
		cout<<"same";
	}
	else
	cout<<"not same";
}
