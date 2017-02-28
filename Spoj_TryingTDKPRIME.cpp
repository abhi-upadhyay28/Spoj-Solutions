#include<bits/stdc++.h>
using namespace std;
#define max 86028123
bool a[86028124];
int main(){                        // AC after long time!!!!  1.17 sec just crossed it!!!
		memset(a,true,sizeof(a));
	a[0]=false;
	a[1]=false;
     int i,j;
    for(i=2;i*i<=max;i++){
    	if(a[i]==true){
    	for(j=i*i;j<=max;j+=i)
    	a[j]=false;
	}
}
vector<int>v;
//int count=0;
v.push_back(0);
for(i=2;i<=max;i++)
{
	if(a[i]==true){
		v.push_back(i);
//		count++;
//		cout<<i<<" "<<count<<"\n";
}
}
int t,n;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	printf("%d\n",v[n]);
}
return 0;
}
