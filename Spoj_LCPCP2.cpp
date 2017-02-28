#include<iostream>
using namespace std;
#define ll long long int
ll modexpo(ll base, ll exp, ll m);
int main(){
	ll e,b,m;
	ll f;
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>b>>e>>m;
		f=modexpo(b,e,m);
		cout<<i<<"."<<" "<<f<<"\n";
	}
	return 0;
}
ll modexpo(ll base, ll exp, ll m){
	ll ans=1;
	while(exp>0){
		if(exp%2==1)
		ans=(ans*base)%m;
		base=(base*base)%m;
		exp=exp/2;
	}
	return ans;
}
