#include<bits/stdc++.h>
using namespace std;
#define max 100000001
bool isprime[100000001];                         // Giving tle !!!! :C
vector<int>v;
void sieve(){
	int i,j;
	v.clear();
	memset(isprime,true,sizeof(isprime));
	isprime[0]=false;
	isprime[1]=false;
	for(i=2;i*i<=max;i++){
		if(isprime[i]==true)
		{
			for(j=i*i;j<=max;j+=i)
			isprime[j]=false;
		}
	}
	for(i=2;i<=max;i++)
	{
		if(isprime[i]==true)
		v.push_back(i);
	}
}
int firstnlcm(int n){
	int lcm=1,i;
	int ns=v.size();
	long long int pp;
	for(i=0;(i<ns&&v[i]<=n);i++)
	{
	pp=v[i];
	while(pp*v[i]<=n)
    pp=pp*v[i];	
	lcm=(lcm*pp)%1000000007;
}
	return lcm;
}
int main(){
	int t,n;
	sieve();
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int ans=firstnlcm(n);
		printf("%d\n",ans);
	}
	return 0;
}
