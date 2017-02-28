#include<bits/stdc++.h>
#define ull unsigned long long int     // AC in one go!!!!
using namespace std;
vector<int> allprime;
void sieve(ull n){
	bool isprime[n+1];
    allprime.clear();
	memset(isprime,true,sizeof(isprime));
    isprime[0]=false, isprime[1]=false;
    int i,j;
    for(i=2;i*i<=n;i++){
    	if(isprime[i]==true)
    	{
    		for(j=i*i;j<=n;j+=i)
    		isprime[j]=false;
		}
	}
	for(i=2;i<=n;i++)
	{
		if(isprime[i]==true)
		allprime.push_back(i);
	}
}
ull factdiv(ull n){
	sieve(n);
	ull result=1,p;
	int i;
	for(i=0;i<allprime.size();i++)
	{
		ull exp=0;
		p=allprime[i];
		while(p<=n){
			exp=exp+(n/p);
			p*=allprime[i];
		}
		result=(result*(exp+1))%1000000007;
	}
	return result;
}
int main(){
	int t,i;
	ull l,r;
	scanf("%d",&t);
	while(t--){
		scanf("%llu%llu",&l,&r);
		ull sum=0;
		for(i=l;i<=r;i++)
		sum=(sum+factdiv(i))%1000000007;
		printf("%llu\n",sum);
	}
	return 0;
}
