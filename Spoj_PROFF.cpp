#include<bits/stdc++.h>
using namespace std;
void add(string m1,string n1,int l1,int l2){
	int i=l1-1,j=l2-1;
	int sum[12]={0};
	int k=0,carry=0,cnt=0;
	for(;i>=0&&j>=0;i--,j--,k++){
		sum[k]=((m1[i]-'0')+(n1[j]-'0')+carry)%10;
		carry=((m1[i]-'0')+(n1[j]-'0')+carry)/10;
		if(carry>0)
		cnt++;
	}
	if(i>=0)
	{
		while(i>=0)
		{
			sum[k++]=(carry+(m1[i]-'0'))%10;
			carry=(carry+(m1[i]-'0'))/10;
			if(carry>0)
			cnt++;
			i--;
		}
	}
	if(carry>0)
	sum[k++]=carry;
	//len1=k-1;
	if(cnt>1)
	cout<<cnt<<" carry operations.\n";
	else if(cnt==1)
	cout<<cnt<<" carry operation.\n";
	else if(cnt==0)
	cout<<"No carry operation.\n";
}
int main(){
	string m1,m2;
	while(1){
		cin>>m1>>m2;
		long long int a=atoll(m1.c_str());
		long long int b=atoll(m2.c_str());
		if(a==0&&b==0)
		break;
		int l1=m1.length();
		int l2=m2.length();
		add(m1,m2,l1,l2);
	}
	return 0;
}
