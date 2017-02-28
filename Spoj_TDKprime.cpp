#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime[100000001];
int till[5000001]={0};
//void sieve(int isprime[]);                         // GIVING WRONG ANSWER ON SUBMITTION!!!!!
int main(){
	memset(isprime,true,sizeof(isprime));
	//cout<<isprime[1];
	ll i,j;
	ll n=100000001;
	isprime[0]=false;
	isprime[1]=false;
	for(i=2;i*i<=n;i++)
	{
		if(isprime[i]==false)
		{
		 till[i]=till[i-1];
		 continue;
	    }  
		
		//if(isprime[i]==true)
		else
		{
			till[i]=till[i-1]+1;
			for(j=i*i;j<=n;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
int t;
ll a;
cin>>t;
while(t--){
	cin>>a;
	for(i=2;i<n;i++)
	{
	if(till[i]==a&&isprime[i]==true)
{
		cout<<i<<endl;
		break;
}
}
}
	return 0;
	
}
