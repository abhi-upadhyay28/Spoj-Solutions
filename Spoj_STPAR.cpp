#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	while(1){
		scanf("%d",&n);
		if(n==0)
		break;
		int cnt=1,a=0;
		int q[n];
		for(i=0;i<n;i++)
		scanf("%d",&q[i]);
		stack<int>stck;
		vector<int>ans;
		for(i=0;i<n;i++){
			if(q[i]!=cnt)
			stck.push(q[i]);
			else if(q[i]==cnt)
			{
				ans.push_back(cnt);
				cnt++;
			}
			a=0;
			while(!stck.empty()){
				if(stck.top()==cnt)
				{
					ans.push_back(cnt);
					cnt++;
					stck.pop();
				}
				else
				{
					a=1;
					break;
				}
			}
			if(a==1)
			continue;
		}
		//string s;
		int b=0;
		int m=ans.size();
		for(i=0;i<n;i++)
		{
			if(ans[i]==i+1)
			b=1;
			else
			{
				b=0;
				break;
			}
	   }
	   if(b==1)
	   printf("yes\n");
	   else
	   printf("no\n");
	    //printf("%d ",ans[i]);
	   // printf("\n");
	}
	return 0;
}
