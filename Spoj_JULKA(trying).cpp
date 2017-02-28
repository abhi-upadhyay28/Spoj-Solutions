#include<bits/stdc++.h>
using namespace std;
int len1,len2;                      // NOt Giving any output !!!!
vector<int>v1,v2;
char m[101],n[101];
int m1[101],n1[101];
int sum[101],diff[101],ans1[101],ans2[101];
void add(int m1[],int n1[],int l1,int l2){
	int i=l1-1,j=l2-1;
	int k=0,carry=0;
	for(;i>=0&&j>=0;i--,j--,k++){
		sum[k]=(m1[i]+n1[j]+carry)%10;
		carry=(m1[i]+n1[j]+carry)/10;
	}
	if(i>0)
	{
		while(i>=0)
		{
			sum[k++]=(carry+m1[i])%10;
			carry=(carry+m1[i])/10;
			i--;
		}
	}
	if(carry>0)
	sum[k++]=carry;
	len1=k-1;
}
void subtract(int m1[],int n1[],int l1,int l2){
	int i=l1-1,j=l2-1,k=0,borrow=0;
	while(i>=0&&j>=0){
		diff[k]=(m1[i]-n1[j])-borrow;
		if(diff[k]<=0)
		{
			diff[k]+=10;
			borrow=1;
		}
		else
		borrow=0;
		k++;
		i--;
		j--;
	}
	if(i>=0)
	{
		while(i>=0){
		
		diff[k]=m[i]-borrow;
		if(diff[k]<=0)
		{
			diff[k]+=10;
			borrow=1;
		}
		else
		borrow=0;
		i--;
		k++;
	}
	}
	
}
void klaudia(){
	v1.clear();
	int i,j,rem=0,divi,quo;
	for(i=len1,j=0;i>=0;i--,j++)
	ans1[j]=sum[i];
	for(i=0;i<len1;i++){
		divi=ans1[i]+(rem*10);
		rem=divi%2;
		quo=divi/2;
		v1.push_back(quo);
	}
	int siz=v1.size();
	for(i=0;i<siz;i++)
	printf("%d",v1[i]);
	printf("\n");
}
void natalia(){
	v2.clear();
		int i,rem=0,divi,quo,j=0;
	for(i=len1;i>=0;i--)
	{
		if(diff[i]!=0)
	{
	ans2[j]=diff[i];
	j++;
}
}
	for(i=0;i<j;i++){
		divi=ans2[i]+(rem*10);
		rem=divi%2;
		quo=divi/2;
		v2.push_back(quo);
	}
	int siz=v2.size();
	for(i=0;i<siz;i++)
	printf("%d",v2[i]);
	printf("\n");
}
int main(){
	int t=10;
	while(t-->0){
	scanf("%s",&m);
	scanf("%s",&n);
	int l1=0,l2=0;
	for(l1=0;l1!='\0';l1++)
	m1[l1]=m[l1]-'0';
	for(l2=0;l2!='\0';l2++)
	n1[l2]=n[l2]-'\0';
	add(m1,n1,l1,l2);
	subtract(m1,n1,l1,l2);
	klaudia();
	natalia();
	//printf("\n");
}
return 0;
}
