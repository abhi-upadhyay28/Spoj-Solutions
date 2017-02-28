#include<iostream>
using namespace std;
#define ll long long int
ll digitsum(ll n){                      // AC in one attempt!!!!
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
	ll n,ss,a;
	int count=0;
    cin>>n;
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
	cout<<count;
	else
	cout<<"-1";    
	return 0;
	
	
}
