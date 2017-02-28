#include<bits/stdc++.h>
using namespace std;
int main(){             // Getting Wrong Answer!!!!!
	int t,i,j;
	scanf("%d",&t);
	for(j=0;j<t;j++){
	
	int n,m;
	scanf("%d%d",&n,&m);
	int a[m];
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	int ans;
	sort(a,a+m);
	if(a[0]==1&&a[m-1]==n)
	{
	ans=m*3-2;
	if(ans>n)
	ans=n;
   }
	else if((a[0]==1&&a[m-1]!=n)||(a[0]!=1&&a[m-1]==n))
	{
	ans=m*3-1;
	if(ans>n)
	ans=n;
    }
    else
    {
    	ans=3*m;
    	if(ans>n)
    	ans=n;
	}
printf("Case %d: %d\n",j+1,ans);
}
return 0;
}
