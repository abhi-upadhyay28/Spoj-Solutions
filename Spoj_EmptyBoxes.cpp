#include<iostream>
using namespace std;             // Accepted in one go :D !!!!
int main(){
	int n,k,f,t,tc,sm;
	cin>>tc;
	while(tc--){
		cin>>n>>k>>t>>f;
		sm=(f-n)/(k-1);
		int tot;
		tot=n+k*sm;
		cout<<tot<<"\n";
		
	}
	return 0;
}
