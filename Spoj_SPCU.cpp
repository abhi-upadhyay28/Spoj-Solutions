#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n];
		for( i=0;i<n;i++)
		cin>>a[i];
		int y=1;
		for(i=0;i<n;i++)
		{
			if(a[i]>i)
			{
				y=0;
				break;
			}
			else
			y=1;
		}
		if(y==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
