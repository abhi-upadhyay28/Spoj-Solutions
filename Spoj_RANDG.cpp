#include<bits/stdc++.h>
using namespace std;
int main(){                     // Wrong answer !!!! as both red and green can be painted !!!!
	int t,n,i,r,ans=0;
	char a[51];
	while(scanf("%s",a)!=EOF)
	{
		n=strlen(a);
		r=0;
		ans=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='R')
			r++;
		}
		int z=r;
		for(i=0;i<n;i++){
			if(a[i]=='G'&&r>0)
			{
				ans++;
				if(ans==z)
				break;
				
			}
			else if(a[i]=='R')
			r--;
		}
		printf("%d\n",ans);
		//cout<<n<<"\n";
	}
	return 0;
}
