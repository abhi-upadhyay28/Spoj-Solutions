#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];             // Wrong Answer!!!!!!!
		                    // doing Small problem........ putting 0 in place of -1 was giving wrong answers!!!!!  Now it is correct!!!!
		int i,count=0,j;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-1;i++)	
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]==2*a[i])
				{
				count++;
				a[i]=-1;
				a[j]=-1;
				break;
			}
			}
			
		}
		cout<<count<<"\n";
		}
		return 0;
}
