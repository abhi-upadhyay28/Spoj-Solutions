#include<bits/stdc++.h>
#define ll long long int  
using namespace std;
int main(){
        int p;
        double n,k,m;
        scanf("%d",&p);
        while(p--){
        scanf("%lf%lf%lf",&n,&k,&m);
		double t,count=0;
		if(n*k<=m)
	    {
		t=n*k;
		count++;
	    }
		while(t*k<=m)
		{
			t=t*k;
			count++;
		}
		printf("%0.0lf\n",count);
	}
		return 0;
    }
