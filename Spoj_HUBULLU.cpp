#include<iostream>
using namespace std;
int main(){
	long long int a,b,n;
	string s;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld%lld",&a,&b);
		if(b==0)
		s="Airborne wins.";
		else if(b==1)
		s="Pagfloyd wins.";
		cout<<s<<"\n";
	}
	return 0;
}
