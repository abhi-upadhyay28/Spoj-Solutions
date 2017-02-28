#include<bits/stdc++.h>
#define ull unsigned long long int     // AC  !!!!
using namespace std;
vector<int> allprime;
map<int,int> ans;
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
void factdiv(ull n){
	sieve(n);
	ull result=1,p;
	int i;
	for(i=0;i<allprime.size();i++)
	{
		int exp=0;
		p=allprime[i];
		while(p<=n){
			exp=exp+(n/p);
			p*=allprime[i];
		}
		ans[allprime[i]]=exp;
	}
	//return result;
}
int main(){
	int t;
	ull n;

		scanf("%llu",&n);
		factdiv(n);
		int sz=ans.size();
		map<int,int>::iterator it;
		for(it=ans.begin();it!=ans.end();it++)
		{
			cout<<it->first<<"^"<<it->second;
			if(sz!=1)
			{
			cout<<" * ";
			sz--;
		}
		}	
	return 0;
}
