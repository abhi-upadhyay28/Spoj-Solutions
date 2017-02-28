#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int r,b,p,s,a,x,y;
	cin>>r>>b;
	p=r+b;
	s=(r+4)/2;
	a=sqrt(s*s-4*p);
	x=(s+a)/2;
	y=(s-a)/2;
	if(x>y)
	cout<<x<<" "<<y<<"\n";
	else
	cout<<y<<" "<<x<<"\n";
	return 0;
}
