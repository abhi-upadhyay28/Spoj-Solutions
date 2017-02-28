#include<bits/stdc++.h>
using namespace std;
int main(){                          // Accepted but saw logic !!!!
	int t,n,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
		int cnt=0,max1=0;
		sort(a,a+n);
		sort(b,b+n);
		for(i=0,j=0;i<n&&j<n;){
			
			if(a[i]<b[j])
			{
			cnt++;
			i++;
		}
		else
		{
			cnt--;
			j++;
		}
		max1=max(cnt,max1);
		}
		printf("%d\n",max1);
	}
	return 0;
}
