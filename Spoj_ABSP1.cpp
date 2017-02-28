#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){                // Saw concept from Geeks For Geeks!!!!
	long long int a[100001];
	int n,i;
	long long int sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=n-1;i>=0;i--){
		sum+=(i*a[i]-(n-1-i)*a[i]);
	}
	cout<<sum<<"\n";
}
return 0;
}
