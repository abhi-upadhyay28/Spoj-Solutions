#include<iostream>
using namespace std;
int main(){
    unsigned long long int k,ans;
    int t;
    cin>>t;
    while(t--){
    	cin>>k;
    	ans=(k-1)*250+192;
    	cout<<ans<<"\n";
	}
	return 0;
}
