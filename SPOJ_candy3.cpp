#include<iostream>
using namespace std;
int main(){
	long long int t,n;            ///// DONE!!!!!
	
	scanf("%lld",&t);
//	printf("\n");
	while(t--){
		scanf("\n%lld",&n);
		long long int a[n];
		long long int sum=0;
		string s="";
		for(long long i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(long long i=0;i<n;i++)
	{
			sum+=a[i];
			sum%=n;           // This was the important line to prevent overflow!!!!
		//if(sum%n==0)
		}
		if(sum==0)
			s="YES";
		else
		s="NO";
		cout<<s;
		if(t!=0)cout<<"\n";
	//	cout<<"\n";
	}
	return 0;
}
