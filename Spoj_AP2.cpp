#include<iostream>
using namespace std;
int main(){
long long int t,tld,td,s,n,a,i,d;
	cin>>t;
	while(t--){
		cin>>td>>tld>>s;
		n=(2*s)/(td+tld);
		d=(tld-td)/(n-5);
		a=td-2*d;
		cout<<n<<"\n";
		for(i=0;i<n;i++)
		cout<<a+i*d<<" ";
		cout<<endl;
		}
		return 0;
}
