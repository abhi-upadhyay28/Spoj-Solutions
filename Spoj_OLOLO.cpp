#include<iostream>
using namespace std;
int main(){
	int n;
	int t,res=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)         // AC in one go!!!
	{
	scanf("\n%d",&t);
	res=res^t;
}
printf("%d",res);
return 0;
} 
