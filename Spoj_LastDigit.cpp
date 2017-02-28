#include<iostream>
using namespace std;
#define ll long long int         
ll modexpo(ll base, ll exp, ll m);              // GIVING WRONG ANSWER ON SUBMITTION!!!!!
                                                // Accepted!!!!!!!!!!!!!!!!!
int main(){
	ll a,b,m=10;
	ll f;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		f=modexpo(a,b,m);
		cout<<f<<"\n";
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
