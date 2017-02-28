#include<iostream>         // Not getting !!!!
#include<cmath>
using namespace std;
int main(){
	int i,j,k,l,m;
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(i=0;i*i*i<=n;i++)
	{
		for(j=0;j*j*j<=n;j++){
			for(k=0;k*k*k<=n;k++){
				for(l=0;l*l*l<=n;l++){
					for(m=0;m*m*m<=n;m++){
						if(i*i*i+j*j*j+k*k*k+l*l*l+m*m*m==n)
						cnt++;
					}
				}
			}
		}
	}
	printf("%d",cnt);
	return 0;
	
}
