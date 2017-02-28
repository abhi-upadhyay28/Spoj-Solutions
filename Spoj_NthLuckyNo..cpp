#include<bits/stdc++.h>
using namespace std;
#define max 5000
// int max=3000;
int nluckyno(int n){
	vector<int> res;
	int prime[max]={0};                // Took Help from Geeks For Geeks (Nth Smart Number).... AC in one go...!!!
	for(int i=2;i<max;i++){
		if(prime[i]==0)
		{
			prime[i]=1;
			for(int j=i*2;j<max;j+=i)
			{
				prime[j]-=1;
				if((prime[j]+3)==0)
				res.push_back(j);
			}
		}
	}
	sort(res.begin(),res.end());
//	for(int i=0;i<=4999;i++)
//	cout<<i+1<<" "<<res[i]<<"\n";
	return res[n-1];
	
}
int main()
{
	int n,t;
	cin>>t;
//nluckyno();
	while(t--)
	{
		cin>>n;
		cout<<nluckyno(n)<<"\n";
	}
	//cout<<
	return 0;       
}
