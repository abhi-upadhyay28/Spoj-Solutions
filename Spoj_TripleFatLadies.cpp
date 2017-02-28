#include<iostream>
//#include<cmath>
using namespace std;
//long long int k[2000000000001];

int main(){
	 int arr[100001];
	int i;
    arr[0]=0;
	arr[1]=192;
	for(i=2;i<=1000;i++)
	arr[i]=arr[i-1]+250;
	for(i=1;i<=1000;i++)
	cout<<i<<" "<<arr[i]<<"\n";
	/*k[2]=442;
	k[3]=692;
	k[4]=942;
 */ 	
	/*long long int i,t,ki;
	for(i=2;i<2000000000001;i++)
	{
	    //if((float)i%4<=a)
	    k[i]=k[i-1]+250;
	}
	cin>>t;
	while(t--)
	{
		cin>>ki;
		cout<<k[ki]<<"\n";
	}   */
	return 0;
	
}
