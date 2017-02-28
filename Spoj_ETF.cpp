#include<bits/stdc++.h>
using namespace std;
bool isprime[1000001];
int phi[1000001];
#define max 1000001         // SHOWING ABSURD RESULTS!!!!!!!
void sieve()                // Still not working!!!!
{ 
    memset(isprime,true,sizeof(isprime));
	for(int p=2;p*p<max;p++)
	{
		if(isprime[p]==true)
		{
			for(int i=2*p;i<=max-1;i+=p)
			isprime[i]=false;
		}
	}
}

int main()
{

	int t,n,i,j;
 sieve();
 	for(int i=1;i<max;i++)
	phi[i]=i;
	//cout<<phi[1]<<" "<<phi[3]<<endl;
	for(i=1;i<max;i++)
	{
		if(isprime[i])
		{
			for(j=i;j<max;j+=i)
			phi[j]=phi[j]-(float)phi[j]/(float)i;
		}
	} 
   scanf("%d",&t);
	for(int z=0;z<t;z++){
		scanf("%d",&n);
	    printf("%d\n",phi[n]);
	}
	return 0;   
}

