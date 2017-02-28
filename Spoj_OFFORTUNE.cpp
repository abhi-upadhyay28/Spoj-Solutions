#include<iostream>
#include<cmath>
#define ll long long int          // expecting ac in first go !!!!
using namespace std;
int main(){
	int m;
	cin>>m;
	while(m--){
		ll a,b,bey,ans,p,aoc,ci;
		int y,n,i,sc,j;
		 double r,k;
		cin>>a>>y>>n;
		p=a;
		ll maxof[n]={0};
		for(i=0;i<n;i++){
			cin>>sc>>r>>aoc;
			if(sc==0)
			{   ci=0;
			     a=p;
				for(j=0;j<y;j++){
					k=r*8192;
			      b= a*(k/8192);
			     bey=a-aoc;
			     ci+=b;
			     a=bey;
			 }
				ans=a+ci;
			//	cout<<ans<<"\n";
			}
			else{
				a=p;
				for(j=0;j<y;j++)
				{
					k=r*8192;
					b=a*(k/8192);
					
					bey=(a+b)-aoc;
					a=bey;
				}
				ans=a;
			//	cout<<ans<<"\n";
			}
			maxof[i]=ans;
		}
		ll max=maxof[0];
		for(i=0;i<n;i++)
		{
			if(maxof[i]>max)
			max=maxof[i];
		}
		cout<<max<<"\n";
	}
	return 0;
}
