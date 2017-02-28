#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		vector<int>v;
		string txt,pat;
		cin>>txt;
		cin>>pat;
		v.clear();
		//scanf("%s",&txt);
		//scanf("%s",&pat);
		int n=txt.length();
		int m=pat.length();
		cout<<n<<" "<<m<<endl;
		int i,j,a=0;
		//int count=0;
		for(i=0;i<=n-m;i++)
		{
		   for(j=0;j<m;j++)
			{
			if(txt[i+j]==pat[j])
			a=1;
			else
			{
			a=0;
			break;
			}
			}
			 if(a==1)
			 {
			 //count++;
			 v.push_back(i+1);	
		     }	
			if(i==n-m&&v.size()==0)
			printf("Not Found\n\n");
		}
		if(v.size()!=0)
		{
			int z=v.size();
			printf("%d\n",z);
			for(i=0;i<z;i++)
			printf("%lld ",v[i]);
			printf("\n\n");
		}
	}
	return 0;
}
