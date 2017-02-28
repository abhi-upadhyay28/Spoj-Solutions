#include<iostream>
using namespace std;          //  AC 
int main(){
	int a,b;
	long long int sum=0;
	scanf("%d%d",&a,&b);
	int i;
	for(i=a;i<=b;i++){
		if(i%2==1)
		sum+=i;
	}
	printf("%lld",sum);
	return 0;
}
