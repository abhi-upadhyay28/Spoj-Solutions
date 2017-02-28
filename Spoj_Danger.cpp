#include<iostream>
#include<cmath>
using namespace std;
bool pow2(int n){
	return (n&&(n&(n-1))==0);        // AC in one go!!!!
}
int a[99000001]={0};
int main(){
	 int n,i;
	string sa;
	
	for(i=1;i<=99000000;i++)
	{
		if(pow2(i))
		a[i]=1;
	}
	int b=3;
	for(i=1;i<=99000000;i++){
		if(a[i]!=1)
		{
			a[i]=b;
			b+=2;
		}
		else{
			b=3;
			continue;
		}
	}
while(1)
	{
		cin>>sa;
//		cout<<s[0]<<" "<<s[1]<<" "<<s[3]<<"\n";
        n=(((sa[0]-48)*10+(sa[1]-48))*pow(10,(sa[3]-48)));
		if(n==0)
		break;
		printf("%d\n",a[n]);

	}            
	return 0;
}
