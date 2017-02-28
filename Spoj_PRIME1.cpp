#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime[1000000001];                             // SHOWING TLE!!!!!!!!
void sieve(bool isprime[], ll m, ll n);
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	ll m,n;
	memset(isprime,true,sizeof(isprime));
	cin>>t;
	while(t--){
		cin>>m>>n;
		sieve(isprime,m,n);
		cout<<"\n";
	}
	return 0;
}
void sieve(bool isprime[], ll m, ll n)
{
	isprime[0]=false;
	isprime[1]=false;
	ll i,j;
	for(i=2;i*i<=n;i++){
		if(isprime[i]==true)
		{
			for(j=i*i;j<=n;j+=i)
			isprime[j]=false;
		}
	}
	for(i=m;i<=n;i++)
	{
		if(isprime[i]==true)
		{
			cout<<i<<"\n";
		}
	}
}
