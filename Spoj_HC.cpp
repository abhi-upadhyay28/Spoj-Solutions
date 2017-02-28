#include<bits/stdc++.h>
using namespace std;            // AC in one go!!!
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n];
		string s[n];
		for(i=0;i<n;i++)
		{
		cin>>s[i];
		if(s[i]=="lxh")
		a[i]=0;
		else
		a[i]=1;
	}
	int res=!(a[0]^a[1]);
	for(i=2;i<n;i++)
	res=!(res^a[i]);
	if(res==0)
	cout<<"lxh\n";
	else
	cout<<"hhb\n";
}
return 0;
}
