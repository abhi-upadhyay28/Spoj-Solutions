#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,i;
	scanf("%d",&t);
	while(t--){
        vector<int>v1,v2;
		scanf("%d%d",&a,&b);
		int v=sqrt(a);
		v++;
		v1.push_back(a);
		while(v*v<=b){
			v1.push_back(v*v);
			v++;
		}
		int n=v1.size();
		for(i=0;i<n-1;i++)
		{
			int z=v1[i+1]-v1[i];
			v2.push_back(z);
		}
		int ands=v2[0];
		int n1=v2.size();
		for(i=1;i<n1;i++)
		ands=ands&v2[i];
		int xors=v2[0];
		for(i=1;i<n1;i++)
		xors=xors^v2[i];
		int ans=(ands)&(xors);
		printf("%d\n",ans);
	}
	return 0;
}
