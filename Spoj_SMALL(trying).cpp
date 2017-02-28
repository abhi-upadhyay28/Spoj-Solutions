#include<bits/stdc++.h>
using namespace std;
#define max 100000001
bool isprime[100000001];             // Precomputation also giving tle !!! :C
int ans[10001]={0};                        
vector<int>v;
void sieve(){
	int i,j;
//	v.clear();
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
void firstnlcm(){
	int lcm=1,i,n;
	int ns=v.size();
	ans[0]=0;
	ans[1]=1;
	long long int pp;
	for(n=2;n<10001;n++){
		lcm=1;
	for(i=0;(i<ns&&v[i]<=n);i++)
	{
	pp=v[i];
	while(pp*v[i]<=n)
    pp=pp*v[i];	
	lcm=(lcm*pp)%1000000007;
}
	ans[n]=lcm;
}
}
int main(){
	int t,n;
	sieve();
    firstnlcm();
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",ans[n]);
	}
	return 0;
}
