#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007 
using namespace std;
ll modexpo(ll base,ll exp){             // AC after observing !!!!
	ll ans=1;
	while(exp>0){
		if(exp%2!=0)
		ans=(ans*base)%m;
		base=(base*base)%m;
		exp=exp/2;
	}
	return ans;
}
int main(){
	int t,mu;
	ll n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
	     mu=2;
		ll y=modexpo(mu,n-1);
		printf("%lld\n",y);
	}
	return 0;
	
}
