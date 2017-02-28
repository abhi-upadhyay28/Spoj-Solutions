#include<bits/stdc++.h>
using namespace std;
//bool isprime[2147483646];
int main(){
	int t;
	scanf("%d",&t);                   // AC IN ONE GO !!!
	int cnt=0;
	while(t--){
		vector<long long int>v;
		 cnt++;
		int n,a;
		long long int m=1;
		scanf("%d",&n);
		while(n--)
		{
			//cin>>a;
		scanf("%d",&a);
		m=m*a;
		}
		m=m+1;
		int div=2;
	while(m>1){
			if(m%div!=0)
			div++;
			else
			{
			m=m/div;
			v.push_back(div);
		//	s.insert(div);
	    } 
		}
	int z=v.size();
	if(z==0)
	{
	printf("Case #%d: %lld\n",cnt,m);	
	//cout<<N<<"^"<<"1"<<" ";		
	}
	else 
		printf("Case #%d: %lld\n",cnt,v[z-1]);	
		//cout<<m+1;
	}
//	cout<<t;
	return 0;
}
