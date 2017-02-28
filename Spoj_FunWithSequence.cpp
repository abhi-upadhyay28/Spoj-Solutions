#include<iostream>
using namespace std;
int binarySearch(int b[],int item, int m);
int main(){
	int n,m;
	int a[150],b[150];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	for(int j=0;j<m;j++)
	cin>>b[j];
	int item;
	for(int i=0;i<n;i++){
		item=a[i];
		if(binarySearch(b,item,m)==1)
		continue;
		else
		cout<<item<<" ";
	}
	return 0;
}
int binarySearch(int b[],int item, int m){
	int mid,beg=0,last=m-1;
	mid=(beg+last)/2;
	while(beg<=last){
		if(item==b[mid])
		return 1;
		else if(item>b[mid])
		beg=mid+1;
		else if(item<b[mid])
		last=mid-1;
		mid=(beg+last)/2;
		}
		return 0;
}
