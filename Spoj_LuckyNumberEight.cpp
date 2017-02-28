#include<bits/stdc++.h>
using namespace std;
int main(){             // 2 testcases wrong !!!
	int n;
	string str,ans;
    scanf("%d",&n);
    cin>>str;
    unsigned long long int i,j,cnt=0;
    for(i=0;i<(1<<n);i++){
    	ans="";
    	for(j=0;j<n;j++){
    		if(i&(1<<j))
    		ans+=str[j];
		}
	unsigned long long int luck=atoll(ans.c_str());
		if(ans!=""&&luck%8==0)
		{cnt++;}
	}
	cout<<cnt%1000000007;
	return 0;
}
