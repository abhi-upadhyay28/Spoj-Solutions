#include<bits/stdc++.h>
#define ll long long int 
using namespace std;          // tle !!!!!!!!
int main(){
	ll n,i;
	while(1){
		scanf("%lld",&n);
		map<ll,ll>m;                 // Now getting wrong answer!!!
		if(n==0)
		break;
		ll div=2;
		vector<ll>v;
		//set<int>s;
		while(n>1){
			if(n%div!=0)
			div++;
			else
			{
			n=n/div;
			v.push_back(div);
		//	s.insert(div);
	    } 
		}          
	/*		while(n%2==0)
		{
		v.push_back(2);
		n=n/2;
	}
	ll i;
	for(i=3;i<=sqrt(n);i+=2){
		while(n%i==0)
		{
			v.push_back(i);
			n=n/i;
		}
	}
	if(n>2)
	v.push_back(n);      */
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
		printf("\n");
}
	return 0;
}
