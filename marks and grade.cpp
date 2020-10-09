#include <iostream>
using namespace std;
int main ()
{
	char grade;
	cout<<"enter your grade =";
	cin>>grade;
    switch(grade){
    	case 'A':
    		cout<<"excellent";
    		break;
    		case'B':
    			cout<<"good";
    			break;
    			case'C':
    				cout<<"ok";
    				break;
	default:
	cout<<"enter valid character";
	}
}
