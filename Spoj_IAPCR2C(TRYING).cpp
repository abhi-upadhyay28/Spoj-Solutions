#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x;           // Giving wrong answer !!!!
	cin>>t;
	while(t--){
		x++;
		int y;
		int n,m,i;
		cin>>n>>m;
		int b[n+1]={0};
		b[0]=0;
		for(i=0;i<m;i++)
		{
			cin>>y;
	b[y]=1;
	b[y-1]=1;
	b[y+1]=1;
		}
		int count=0;
		for(i=1;i<=n;i++)
		{
			if(b[i]==1)
			count++;
		}
	cout<<"Case "<<x<<": "<<count<<"\n";
	}
	return 0;
}
