#include<iostream>
#define ll long long int 
using namespace std;
ll gcd(ll a,ll b){
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
}
int main(){
	ll a,b;
	while(1){
cin>>a>>b;
if(a==0&&b==0)
break;
ll d=gcd(a,b);
ll ans=(a*b)/(d*d);
cout<<ans<<"\n";
}
return 0;
}
