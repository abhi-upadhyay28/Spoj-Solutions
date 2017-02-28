#include<iostream>
#include<cmath>
# define ll long long int                   // AC in one go!!!!!!
ll gcd(ll a, ll b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
using namespace std;
int main(){
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll i;
		ll f=floor(n/2);
		for(i=f;i>=0;i--)
		{
			if(gcd(i,n)==1)
			break;
		}
		cout<<i<<"\n";
		
	}
	return 0;
}
