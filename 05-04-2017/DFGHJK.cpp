#include <iostream>
using namespace std	;
class triangle{
	public:
		int tri(int x,int y,int z);
};
int main()
{
	triangle T;
	int x,y,z;
	cout<<"Enter First angle =";
	cin>>x;
	cout<<"Enter Second angle =";
	cin>>y;
	cout<<"Enter Third angle =";
	cin>>z;
	T.tri(x,y,z);
	if(T.tri(x,y,z)==180)
	{
		cout<<"Right angle triangle";
	}
	else
	cout<<"Not Right angle triangle";
}
int triangle::tri(int x,int y,int z)
{
	int sum;
	sum=x+y+z;
}
