#include<iostream>
using namespace std;
int insertion(int a[],int n){
	int cnt=0;
	int i,temp,j;
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			cnt++;
			j--;
		}
		a[j+1]=temp;
	}
	return cnt;
}
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n];
		int i;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		int count=insertion(a,n);
	//	insertion(a,n);
	//	for(i=0;i<n;i++)
		printf("%d\n",count);
	}
	return 0;
}
