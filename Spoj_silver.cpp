#include<iostream>
using namespace std;
int main(){
	int n;
    while(1){
    	int count=0;
    	cin>>n;
    	if(n==0)
    	break;
    	while(n>0){
    		n=n/2;
    		count++;
		}
		cout<<count-1<<"\n";
		
	}
	return 0;
}
