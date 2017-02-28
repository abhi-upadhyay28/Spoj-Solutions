#include<iostream>
using namespace std;
int main(){
	long long int n;
    cin>>n;
    int t=n%10;
    int ans;
    if(t==0)
    {
    	ans=2;
    	cout<<ans<<"\n";
	}
    else
    {
	ans=1;
	cout<<ans<<"\n"<<n%10;
}
    

	return 0;
}
