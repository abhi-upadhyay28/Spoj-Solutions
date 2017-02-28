#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,c,b,i;
//	vector<int>v(10000001,0);
	
	map<int,int>m;
//	for(i=1;i<10000001;i++)
//	m[i]=0;  
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
			m[j]++;
			j++;
		    }
	}
		int max=0;
		map<int,int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			if(max<it->second)
			max=it->second;
		}
		printf("%d\n",max);
	}
	return 0;
}
