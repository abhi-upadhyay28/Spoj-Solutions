#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,i;
	scanf("%d",&t);
    while(t--){
    	scanf("%d%d",&n,&k);
    	int a[n];
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	int cnt=0,sum=0;
    	for(i=0;i<n;i++)
    	{
    		if(a[i]<0)
    		cnt++;
		}
		if(cnt>=k)
		{
			sort(a,a+n);
			for(i=0;i<k;i++)
			(a[i]>0)?(a[i]=a[i]):(a[i]=(-a[i]));
			for(i=0;i<n;i++)
			sum+=a[i];
		}
		else{
			for(i=0;i<n;i++){
			if(a[i]<0)
			{
				a[i]=-a[i];
				k--;
			}
		}
		sort(a,a+n);
		if(k%2==0)
		{
			for(i=0;i<n;i++)
			sum+=a[i];
		}
		else
		{
			for(i=1;i<n;i++)
			sum+=a[i];
			sum-=a[0];
		}
	}
	printf("%d\n",sum);
	}
    	return 0;
}
