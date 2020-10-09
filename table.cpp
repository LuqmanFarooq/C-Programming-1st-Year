#include <iostream>
using namespace std;
void table(int a);
int main()
{
	int input;
	cout<<"ENter number";
	cin>>input;
	
	table(input);

}

void table(int a){
	
	for(int i=1; i<=10; i++){
		cout<<a<<" x "<<i<<" = "<<a*i<<endl;
		
	}
}
