#include<bits/stdc++.h>
#define max 100000000
using namespace std;
bool a[100000001];
int main(){                   // AC .... 1.22 sec :c
	memset(a,true,sizeof(a)); //  AC ....1.20 sec using C++(4.3.2)
	a[0]=false;
	a[1]=false;
    int i,j;
    for(i=2;i*i<=max;i++){
    	if(a[i]==true){
    	for(j=i*i;j<=max;j+=i)
    	a[j]=false;
	}
}
int count=0;
for(i=2;i<=max;i++){
	if(a[i]==true)
	{
		count++;
		if(count%100==1)
		printf("%d\n",i);
	}
}
return 0;
}

