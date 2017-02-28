#include<iostream>
using namespace std;
#define ll long long int 
ll sumd(ll n){
	int rem;
	ll sum=0;                   // AC in third go :C !!!Doing silly mistakes!!!
	while(n!=0){
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	ll n,ans;
	while(t--)
	{
		
		scanf("%lld",&n);
		//ll sum1=sumd(n);
		while(1){
			ll sum1=sumd(n);
			if(n%sum1==0)
			{
				ans=n;
				break;
			}
			else
			n++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
