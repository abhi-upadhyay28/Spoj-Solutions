#include<iostream>
#include<cmath>
#define ll long long int 
using namespace std;                    // Hope it Should get ac in one go!!!!
ll expo(ll base, ll exp){
	ll ans=1;
	while(exp>0){
		if(exp%2==1)
		ans=base*ans;
		base=base*base;
		exp/=2;
		}
		return ans;
}
int main(){
	int t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		ll sum=0,i=1;
		while(floor((n)/expo(5,i))>0)
		{
			sum+=(floor((n)/expo(5,i)));
			i++;
		}
		cout<<sum<<"\n";
	}
	return 0;
	
}
