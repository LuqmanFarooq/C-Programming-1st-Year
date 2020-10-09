#include <iostream>
using namespace std;
struct checking{
	string a;
	string b;
};
int main(){
	checking s1;
	cout<<"Enter 1st word to be checked :";
	cin>>s1.a;
	cout<<"Enter 2nd word to be checked :";
	cin>>s1.b;
	if(s1.a==s1.b){
		cout<<"Words are same";
	}
	else
	cout<<"Words are different";
}
