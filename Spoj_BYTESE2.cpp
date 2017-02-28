#include<bits/stdc++.h>
using namespace std;
int a[10000001]={0};
int main(){
	int t,n,c,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int i,j;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&c,&b);
			j=c;
			while(j<=b)
			{
			a[j]++;
			j++;
		    }
	}
		int max=a[0];
		for(i=1;i<10000001;i++)
		{
			if(max<a[i])
			max=a[i];
		}
		printf("%d\n",max);
	}
	return 0;
}
