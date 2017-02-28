#include<iostream>
using namespace std;
long long int gcd(long long int a, long long int b){
	if(b==0)
	return a;
	else
    return gcd(b,a%b);	
}
int main(){
	long long int a,b,x,y;
	int t;
	cin>>t;                       // Accepted in 2nd attempted!!!!!!!
	while(t--){
		cin>>a>>b;
		long long int d=gcd(a,b);
		if(d==1)
		{
		
		x=b;
		y=a;
		cout<<x<<" "<<y<<"\n";
		}
	else
	{
		x=b/d;
		y=a/d;
		cout<<x<<" "<<y<<"\n";
	}
	}
	return 0;
}
