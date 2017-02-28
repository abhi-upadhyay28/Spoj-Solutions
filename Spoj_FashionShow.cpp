#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
		int n;
		cin>>t;
	while(t--)
	{
	
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		cin>>b[i];
		sort(b,b+n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=(a[i]*b[i]);
		}
		cout<<sum<<"\n";
	}
	return 0;
}
