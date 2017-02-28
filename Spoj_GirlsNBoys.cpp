#include<iostream>
#include<cmath>
using namespace std;           // Accepted in 2nd attempt!!!
int main(){
	int g,b;
	float ans;
	while(1)
	{
		cin>>g>>b;
		if(g==(-1)&&b==(-1))
		break;
		else if(g==0)
		ans=b;
		else if(b==0)
		ans=g;
		else if(g>b)
		{
		ans=(float)(g)/(float)(b+1);
		if(ans-floor(ans)>0)
		ans=floor(ans)+1;
		else
		ans=floor(ans);
	}
		//ans=ceil(double(g/b));
		else if(b>g)
		{
		ans=(float)(b)/(float)(g+1);
			if(ans-floor(ans)>0)
		ans=floor(ans)+1;
		else
		ans=floor(ans);
	}
	//	ans=ceil(double(b/g));
		else if(g==b)
		ans=1;
		else if(g==0&&b==0)
		ans=0;
		cout<<ans<<"\n";
		
	}
	return 0;
}
