#include<bits/stdc++.h>
using namespace std;
//#define max 10000000001
/*bool isprime[max];                         // AC after 3 attempt !!!
void sieve(){
	int i,j;
	memset(isprime,true,sizeof(isprime));
	for(i=2;i*i<max;i++)
	{
		if(isprime[i]==true)
		{
			for(j=i*i;j<max;j+=i)
			isprime[j]=false;
		}
	}
} */
int main(){
//	sieve();
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		int count=0;
		if(a==0&&b<=3)
		count=b+1;
		else if(a==0&&b>=4)
		count=4;
		else if(a==1&&b<=3)
		count=b;
		else if(a==1&&b>=4)
		count=3;
		else 
		count=0;
	//	int i;
	//	for(i=a;i<=b;i++)
	//	{
	//		if(i==0)
			
		/*	if(isprime[i]==true)
		//	cout<<i<<"\n";
			if(isprime[i]==true&&(isprime[i*i+1]==true||(isprime[i*i+2]==true)))
			count++;
		}     */
		printf("%d\n",count);
	}
	return 0;
}

