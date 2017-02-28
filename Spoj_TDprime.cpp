#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime[100000001];
int till[100000001]={0};
//void sieve(int isprime[]);
int main(){
	memset(isprime,true,sizeof(isprime));
	//cout<<isprime[1];
	int i,j,n=100000000;
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
		{                                                             // GIVING WRONG ANSWER ON SUBMITTION!!!!!
			till[i]=till[i-1]+1;
			for(j=i*i;j<=n;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
	for(i=2;i<=n;i++){
		if(till[i]%100==1||isprime[i]==false)
		cout<<i<<endl;
	}
	return 0;
	
}
