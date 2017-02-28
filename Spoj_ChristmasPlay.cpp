#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	//long long int a[]
	int t,n,k;            // MY logic Gave wrong answer.... Now giving correct answer!!!!!
	cin>>t;
	while(t--){           // Accepted .... doing silly mistake!!!!!
		cin>>n>>k;
		long long int a[n];
		int i,ans;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		if(k==1)
		ans=0;
		else if(k==n)
		ans=a[n-1]-a[0];
		else{
		
		i=0;
		ans=a[k-1]-a[i];
		while(i+k<=n)
		{
			if(a[k-1+i]-a[i]<ans)
		      ans=a[k-1+i]-a[i];
		     i++;
		}
	}
	cout<<ans<<"\n";
	}
	return 0;
}
