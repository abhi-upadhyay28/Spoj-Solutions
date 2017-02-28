#include<iostream>
using namespace std;
int main(){
	int n;                 // Ac in one go!!!!
	int count=0;
	while(1){
		int i,j;
		scanf("%d",&n);
		count++;
		if(n==-1)
		break;
		int a[n+1];
		for(i=0;i<=n;i++)
		scanf("%d",&a[i]);
		int x;
		cin>>x;
		int val[x];
		for(i=0;i<x;i++)
		scanf("%d",&val[i]);
		long long int y=0;
		long long int val1[x];
		int p=1;
		for(i=0;i<x;i++)
		{
			y=0;
			p=1;
			for(j=n;j>=0;j--)
			{
				y+=(a[j]*p);
				p=p*val[i];
			}
			val1[i]=y;
		}
		printf("Case %d:\n",count);
		for(i=0;i<x;i++)
		printf("%d\n",val1[i]);
	}
	return 0;
}
