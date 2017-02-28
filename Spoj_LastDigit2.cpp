#include<iostream>
#include<string>
using namespace std;
#define ll long long int         
int modexpo(string s, ll exp, ll m);              
                                                // Accepted in 1st attempted!!!!!!!!!!!!!!!!!(a can be of 1000 digits)...
int main(){
	ll b,m=10;
	string a;
	ll f;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		f=modexpo(a,b,m);
		cout<<f<<"\n";
	}
	return 0;
}
int modexpo(string a, ll exp, ll m){
	int ans=1;
	int n=a.length();
	int base=a[n-1]-48;
	//cout<<base<<"\n";
	while(exp>0){
		if(exp%2==1)
		ans=(ans*base)%m;
		base=(base*base)%m;
		exp=exp/2;
	}
	return ans;
}
