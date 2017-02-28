#include<bits/stdc++.h>
#define ll long long int 
using namespace std;          
int main(){
	ll n,i;
	while(1){
		ll cnt;
		scanf("%lld",&n);
	//	map<ll,ll>m;                // done .........took help after struggling for hours !!!!
		if(n==0)
		break;
		ll i;
		for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cnt=0;
		while(n%i==0)
		{
			cnt++;
			n=n/i;
		}
		printf("%lld^%lld ",i,cnt);	
		//cout<<i<<"^"<<cnt<<" ";	
		}
	  // cout<<endl;
	}
	if(n!=1)
	{
	printf("%lld^1 ",n);	
	//cout<<N<<"^"<<"1"<<" ";		
	}
printf("\n");
}
	/*	ll div=2;
		vector<ll>v;
	ll z=2;
	while(z*z<=n){
		if(n%z==0)
		{
			v.push_back(z);
			n/=z;
		}
		else
		z++;
		}
		if(n>1)
		v.push_back(n);
		int x,max,j,cnt;
		max=v.size();
	//	cout<<max<<"\n";
		for(i=0;i<max;i++){
		x=v[i];
		cnt=1;
		for(j=i+1;j<max;j++){
			if(v[j]==x)
			cnt++;
			else
			{
				i=j-1;
				break;
			}
		}
		m[x]=cnt;
		if(cnt==max)
		break;
		}
		map<ll,ll>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		printf("%lld^%lld ",it->first,it->second);
		printf("\n");            */

	return 0;
}
