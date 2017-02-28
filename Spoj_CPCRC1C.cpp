#include<iostream>
#define ll long long int 
using namespace std;
ll sumd(ll n){
	ll sumo=0;
	int rem;
	while(n!=0){
		rem=n%10;
	    sumo+=rem;
	    n=n/10;
	}
	return sumo;
}
int main(){
	ll a,b,i,sum;
	while(1){
		scanf("%lld%lld",&a,&b);
		if(a==-1&&b==-1)
		break;
	     sum=0;
		for(i=a;i<=b;i++)
		sum+=sumd(i);
		printf("%lld\n",sum);
	}
	return 0;
	
}
