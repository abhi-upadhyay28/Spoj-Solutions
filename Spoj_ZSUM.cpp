#include<iostream>
#define ll long long int 
using namespace std;
ll modexpo(ll base, ll exp, ll m)
{
	ll ans1=1;
	while(exp>0)
	{
		if(exp%2==1)
		ans1=(ans1*base)%m;
		base=(base*base)%m;
		exp/=2;
	}
	return ans1;
	
}
int main(){
	ll n,k,m=10000007;
	while(1){
		cin>>n>>k;
		if(n==0&&k==0)
		break;
		ll a,b,c,d,ans;
		a=modexpo(n-1,k,m);
		b=modexpo(n,k,m);
		c=modexpo(n-1,n-1,m);
		d=modexpo(n,n,m);
		ans=(2*a+b+2*c+d)%m;
		cout<<ans<<"\n";
	}
	return 0;
	}
