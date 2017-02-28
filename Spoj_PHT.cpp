#include<iostream>
#include<cmath>
#define ll long long int 
using namespace std;        // AC in third go :C
int main(){
	ll n;
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		long double x=sqrt((16*n)+16);
		ll y=(x-4)/4;
		//ll ans=ceil(y);
		cout<<"Case "<<i+1<<":"<<" "<<y<<"\n";
	}
	return 0;
}
