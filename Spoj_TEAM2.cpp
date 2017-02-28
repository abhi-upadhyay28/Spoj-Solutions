#include<bits/stdc++.h>
using namespace std;              // Right answer!!!!
int main(){
	 int a[4];
	int i=0;
    int ans;
	while(scanf("%d",&a[0])!=EOF){
		i++;
		ans=0;
		int j;
		int n=4;
		for(j=1;j<4;j++)
		scanf("%d",&a[j]);
		sort(a,a+n);
		ans=a[2]+a[3];
		printf("Case %d: %d\n",i,ans);
		
	  /*  double ans=sqrt(a*a+b*b+c*c+d*d);
	    if(floor(ans)==ans)
	    printf("Case %d: %0.0lf\n",i,ans);
	    else
	    printf("Case %d: %0.0lf\n",i,floor(ans)+1);      */
	}
	return 0;
}
