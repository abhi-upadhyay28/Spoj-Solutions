#include<iostream>
using namespace std;               // AC in one attempt !!!!
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		string s;
		scanf("%d%d",&n,&m);
		if(n==m&&n%2==1)
	        s="R";
	    else if(n==m&&n%2==0)
	        s="L";
	    else if(n<m&&n%2==0)
		s="L";
		else if(n<m&&n%2==1)
		s="R";
		else if(n>m&&m%2==0)
		s="U";
		else if(n>m&&m%2==1)
		s="D";
		cout<<s<<"\n";    
	}
	return 0;
}
