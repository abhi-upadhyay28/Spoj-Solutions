#include<iostream>
#include<algorithm>
using namespace std;
	int b[1000001]={0};
int main(){

	int t;                 
	scanf("%d",&t);
	while(t--){
		string s;
	for(int j=0;j<1000001;j++)
	b[j]=0;
		int ans=2000,n;          // Showing TLE!!!!
		                         // accepted by just changing cin,cout by scanf, printf!!!!!!
		scanf("%d",&n);          // AC in 2nd go!!!
		int a[n];
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n);
		for(int i=0;i<n;i++)
		b[1000+a[i]]++;
		for(int j=0;j<1000001;j++)
		{
			if(b[j]>(n/2))
			{
				s="YES";
				ans=j-1000;
				break;
			}
		}
		if(ans>(-1000)&&ans<1000)
       // cout<<s<<" "<<ans<<"\n";
       printf("YES %d\n",ans);
        else
        printf("NO\n");
	}
	return 0;
}
