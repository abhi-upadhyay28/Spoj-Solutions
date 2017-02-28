#include<iostream>
using namespace std;
int rev(int n);
int main(){
	int n,x,y,a,b,sum,ans;
	cin>>n;
	while(n--){
		cin>>x>>y;
		a=rev(x);
		b=rev(y);
		sum=a+b;
		ans=rev(sum);
		
		cout<<ans<<endl;
	}
	return 0;
}
int rev(int n){
	int pal=0,rem;
	while(n!=0){
		rem=n%10;
		pal=pal*10+rem;
		n=n/10;
	}
	return pal;
}
