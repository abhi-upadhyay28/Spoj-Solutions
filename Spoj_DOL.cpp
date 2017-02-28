#include<iostream>
using namespace std;
int main(){              // AC in second go!!!!
	int t,i;
	long long int n,h,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld",&n);
		if(n%2==1)
		ans=n;
		else
		{
			h=n/2;
		    if(h%2==1)
		    ans=h;
		    else{
			while(1){
				if(n%h==0&&h%2==1)
				{
				ans=h;
				break;
			   }
			   h=h/2;;
		}
	}
}
//cout<<"Case "<<i+1<<": "<<ans<<"\n";
printf("Case %d: %lld\n",i+1,ans);
}
return 0;
}
