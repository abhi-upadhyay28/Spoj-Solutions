#include<iostream>
using namespace std;
int main{
	int t;
	int x=0;
    //scanf("%d",&t);
    cin>>t;
	while(t--){
		int m,n,i,j;
		 x++;
		//scanf("%d%d",&n,&m);
		cin>>n>>m;
		int a[m];
		int b[n+1]={0};
			b[0]=-1;
		for(i=0;i<m;i++){
		//scanf("%d",&a[i]);
		cin>>a[i];
		int z=i;
		b[i]=1;
		z++;
		if(z<n+1)
		b[z]=1;
		if(z>2)
		b[z-2]=1;
}
int count=0;
for(i=1;i<=n;i++)
{
	if(b[i]==1)
	count++;
}
printf("Case %d: %d\n",x,count);
}
return 0;
}
