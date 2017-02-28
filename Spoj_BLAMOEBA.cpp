#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007 
using namespace std;
ll modexpo(ll base,ll exp){             // Showing TLE !!!!
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
	int t,mu,n;
	ll c;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&mu,&n);
		int u=n-1;
		ll y=modexpo(mu,n);
		c=y/mu;
		while(u--){
			c=(c+y)/mu;
		}
		printf("%lld %lld\n",c,y);
	}
	return 0;
	
}
