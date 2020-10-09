#include <iostream>
using namespace std	;
class triangle{
	public:
		int tri(int a,int b,int c);
};
int main()
{
	triangle s;
	int a,b,c;
	cout<<"enter 1st angle =";
	cin>>a;
	cout<<"enter 2nd angle =";
	cin>>b;
	cout<<"enter 3rd angle =";
	cin>>c;
	s.tri(a,b,c);
	if(s.tri(a,b,c)==180){
		cout<<"right angle triangle";
	}
	else
	cout<<"not right angle triangle";
}
int triangle::tri(int a,int b,int c){
	int sum;
	sum=a+b+c;
}
