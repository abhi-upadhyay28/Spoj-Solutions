#include<iostream>
using namespace std;                 // AC in 1st attempt !!!!
int main(){
	int t,v,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n];
		string s;
		int i,tot;
		v=0;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		if(a[0]==1)
		{
			for(i=1;i<n;i++)
			{
				if(a[i]!=0)
				{
					v=1;
					break;
				}
			}
			if(v==1)
			s="No";
			else
			s="Yes";
		}
		else if(a[0]==0)
		{
			tot=2;
			for(i=1;i<n-1;i++)
			{
				tot=tot-a[i];
				tot=2*tot;
			}
		//	if(n==2)
			if(a[n-1]==tot)
			s="Yes";
			else
			s="No";
		}
		else
		s="No";
		cout<<s<<"\n";
	}
	return 0;
}
