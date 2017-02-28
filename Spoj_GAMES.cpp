
#include<iostream>
#include<cmath>
using namespace std;
int main(){                        // Even not able to clear test cases !!!!
	int t;
	scanf("%d",&t);
	double avg,prod,ap,n;
	while(t--){
		scanf("%lf",&avg);
		int count=1;
		ap=avg-int(avg);
		int i=2;
		n=ap;
		while(n>0){
			prod=ap*i;
			n=prod-int(prod);
			cout<<(int(prod))<<'\n';
			cout<<"n:"<<n<<" "<<"prod: "<<prod<<" fp:"<<(int(prod))<<"\n"<<"____________________"<<'\n';
			i++;
			count++;
			if(n<0.000001)
			{
			n=0;
			break;
		    }
		}
		printf("%d\n",count);
	}
	return 0;
}
