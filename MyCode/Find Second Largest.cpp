#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	int a[3],max=INT_MIN,smax=INT_MIN,i;
	cin>>a[0]>>a[1]>>a[2];
	for(i=0; i<3; i++)
	{
	    if(a[i]>max){
	    smax=max;
	    max=a[i];}
	    else if(a[i]>smax){
	    smax=a[i];}
	    
	}
	cout<<smax<<endl;
return 0;
	
}
