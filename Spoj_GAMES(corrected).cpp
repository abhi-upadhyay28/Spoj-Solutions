#include<bits/stdc++.h>
using namespace std;
int gcd(int numb,int q)
{
	if(q==0)
	return numb;
	else
	return gcd(q,numb%q);
}
int main(){
	string s;
	int t;
	scanf("%d",&t);
//	long long int numb;
	while(t--){
		cin>>s; 
		//numb=1;
		int n=s.length();
		int count=0,i;
		for(i=n-1;i>=0;i--)
		{
			if(s[i]!='.')
			count++;
			else
			break;
		}
	 int q=pow(10,count);
	//	cout<<n<<" "<<count<<endl;
	  double num=atof(s.c_str());
	  num=num*q;
	  int num1=(int)num;
	  //num=(long long int)num;
	  int d=gcd(num1,q);
	  int ans=q/d;
	  printf("%d\n",ans); 
	}
	return 0;
	
}
