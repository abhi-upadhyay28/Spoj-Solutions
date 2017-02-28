#include<iostream>
using namespace std;               // AC using observation !!!
int main(){
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		int sum=n+m;
		if(n%2==1&&m%2==1&&sum%2==0)
		cout<<"Ramesh"<<"\n";
		else
		cout<<"Suresh"<<"\n";
	}
	return 0;
}
