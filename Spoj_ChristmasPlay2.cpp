#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	//long long int a[]
	int t,n,k;
	cin>>t;                            // Gave correct answer..... not my  
	while(t--){
		cin>>n>>k;
		long long int a[n];
		int i,ans=2000000000;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=0;i<=n-k;i++)
		{
			if(a[i+k-1]-a[i]<ans)
			ans=a[i+k-1]-a[i];
}
	cout<<ans<<"\n";
	}
	return 0;
}
