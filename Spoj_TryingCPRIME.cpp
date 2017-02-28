#include<bits/stdc++.h>
using namespace std;
#define max 1e8                          // TLE!!!!!!!!!!!
bool a[100000001];
int prime(int x){
		memset(a,true,sizeof(a));
	a[0]=false;
	a[1]=false;
     int i,j;
    for(i=2;i*i<=x;i++){
    	 if(a[i]==true){
    	//	till[i]=till[i-1]+1;
    	for(j=i*i;j<=x;j+=i)
    	a[j]=false;
	}
}
	int cnt=0;
	for(i=2;i<=x;i++)
	{
		if(a[i]==true)
		cnt++;
	}
	return cnt;
}     
int main(){                       
while(1){
	int x;
	scanf("%d",&x);
	int count=prime(x);
	//printf("%d\n",count);
		if(x==0)
	break;
	double a=(double)x/(double)log(x);
	 double ans=((double)(abs(count-a))/(double)count)*(100.0);
	printf("%0.1lf\n",ans);      
}

return 0;
}
