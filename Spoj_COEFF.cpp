#include<bits/stdc++.h>
#define ll long long int 
using namespace std;              // AC 
ll fact(int n){
	int i;
	if(n==0)
	return 1;
	ll facts=1;
	for(i=1;i<=n;i++)
	facts*=i;
	return facts;
}
int main(){
	int n,k,i;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
        int a[k];
        for(i=0;i<k;i++)
		scanf("%d",&a[i]);
		ll mults=1;
		for(i=0;i<k;i++)
		mults=mults*fact(a[i]);
		ll nfact=fact(n);
		ll ans=nfact/mults;
		printf("%lld\n",ans);
	}
	return 0;
}
