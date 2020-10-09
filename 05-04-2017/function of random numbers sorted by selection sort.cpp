#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
int j[100];
srand(time(NULL));
for(int i=0;i<100;i++){
	j[i]=rand()%100;
	cout<<j[i]<<" ";
}

}
