#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll digitsum(ll n){                      // TLE !!!!
	ll sum=0;
	int rem;
	while(n>0)
	{
		rem=n%10;
		sum+=(rem*rem);
		n=n/10;
	}
	return sum;
}
int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,ss,a;
	int count=0,t,qrs=-1;
    cin>>t;
   //scanf("%d",&t);
   while(t--){
   cin>>n;
   //scanf("%lld",&n);
    ss=digitsum(n);
    //cout<<ss;
    count++;
    while(ss>1)
    {
    	a=ss;
    	ss=digitsum(a);
    	count++;
    	if(ss==20)
		break;
	}
	if(ss==1)
	cout<<count<<"\n";
//printf("%d\n",count);
	else
	cout<<"-1"<<"\n";
	//printf("%d\n",qrs);
}
	return 0;
	
	
}
