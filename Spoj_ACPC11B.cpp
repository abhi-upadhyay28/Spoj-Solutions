#include<iostream>
#include<cmath>
using namespace std;               // AC in one go!!!!
int main(){                        // brute force accepted
	int t,i,j;
	scanf("%d",&t);
	int n,m;
	while(t--){
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&m);
		int b[m];
		for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		int min=abs(a[0]-b[0]);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
			{
				if(min>abs(a[i]-b[j]))
				min=abs(a[i]-b[j]);
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
