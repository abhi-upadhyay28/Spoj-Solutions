#include<bits/stdc++.h>
using namespace std;
#define ll long long int                 // AC in one go!!!!!!
ll fact(ll n){
	if(n<0)
	return 0;
	else if(n<=1)
	return 1;
	else{
		long double x=n*log10(n/M_E)+(1/2.0)*(log10(2*M_PI*n));
		ll ans=(floor(x)+1);
	}
}
int main(){
	int t;
	long long int n,ans;
	scanf("%d",&t);
	while(t--){
	scanf("%lld",&d);
	printf("%lld",fact(n));
	printf("\n");
	}
	return 0;
	
}
