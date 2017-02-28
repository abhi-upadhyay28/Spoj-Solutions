#include<bits/stdc++.h>
using namespace std;
int main()                //  AC in one go !!!!
{
	vector<int>v;
	int n,max=0,k;
	int i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<=n-k;i++)
	{
			max=a[i];
		for(j=0;j<k;j++)
		{
		if(max<a[i+j])
		max=a[j+i];
		}
		v.push_back(max);
	}
	int z=v.size();
	for(i=0;i<z;i++)
	printf("%d ",v[i]);
	return 0;
}
