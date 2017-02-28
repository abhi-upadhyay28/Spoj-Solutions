#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void simplesieve(ll limit, vector<ll>&prime,ll m){
	bool mark[limit+1];
	memset(mark,true,sizeof(mark));
	ll i,j;
	
	 for(i=2;i*i<limit;i++){
		if(mark[i]==true)
		{
			for(j=i*i;j<limit;j+=i)
			mark[j]=false;
		}
	}
	for(i=2;i<limit;i++)
	{
		if(mark[i]==true)
		{
		prime.push_back(i);
		if(i>=m)
		cout<<i<<"\n";
	}
}
}
void segmented(ll m,ll n){
	ll limit=floor(sqrt(n))+1;
	vector<ll>prime;
	ll low;
	simplesieve(limit,prime,m);
	if(m>limit)
	low=floor(m/limit)*limit;
	else
	low=limit;

		ll i,j;
	ll high=low+limit;
	while(low<n){
		bool marks[limit+1];
		memset(marks,true,sizeof(marks));
	
		for(i=0;i<prime.size();i++){
		int lowlim=floor(low/prime[i])*prime[i];
		if(lowlim<low)
		lowlim+=prime[i];
		for(j=lowlim;j<=high;j+=prime[i])                   // j<=high is necessary....absence of equal to gave wrong answer!!!
		marks[j-low]=false;
	}
	for(i=low;i<=high;i++)
	{
		if(marks[i-low]==true&&i>=m)
		cout<<i<<"\n";
	}
	low=low+limit;
	high=high+limit;
	if(high>=n)
	high=n;
}
}
int main(){
	int t;
	ll m,n;
	cin>>t;
	while(t--){
	cin>>m>>n;
	segmented(m,n);
	cout<<"\n";
}
	return 0;
}

