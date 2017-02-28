#include<bits/stdc++.h>
using namespace std;
int main(){                   // Even naive algo works !!!
	int n,m;
	string p,t;
	while(scanf("%d",&m)!=EOF)
	{
		vector<int>v1;
		int i,j,a=0;
		cin>>p;
		cin>>t;
		int n=t.length();
		for(i=0;i<=n-m;i++){
			for(j=0;j<m;j++)
			{
				if(p[j]==t[i+j])
				a=1;
				else{
				a=0;
				break;
			}
		}
			if(a==1)
			v1.push_back(i);
			}
		
			int z=v1.size();
			if(z!=0){
			for(i=0;i<z;i++)
			cout<<v1[i]<<"\n";
		}
	    else
		cout<<"\n";
		cout<<"\n";
}
return 0;
}
