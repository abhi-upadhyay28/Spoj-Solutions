#include<iostream>
#include<cmath>
using namespace std;          // TLE !!!!!
int main(){               
	int t;
	long long int n;
	cin>>t;
	while(t--){
		cin>>n;
		int i;
		long long int cnt=0;
		for(i=1;i<=sqrt(n)+1;i++){
			if(n%i==0){
				if(n/i==i)
				cnt++;
				else
				cnt+=2;
			}
		}
		if(cnt%2==0)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}
