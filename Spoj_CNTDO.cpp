#include<bits/stdc++.h>
using namespace std;             // wrong answer!!!!
int main(){                        
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    int count=0,j;
	    //sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;j<n;j++)
	    	{
	    		if(a[i]==2*a[j])
	    		{
				count++;
			//	a[i]=-100000 ;
				a[j]=-100000 ;
			  break;
			}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
