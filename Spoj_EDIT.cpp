#include<bits/stdc++.h>
using namespace std;
int main(){                  // Wrong !!!!
	char arr[10001];
	while(scanf("%s",&arr)!=EOF)
	{
		int n=strlen(arr);
		int ans=0,i;
		if(n==1)
		{
		printf("%d\n",ans);
		continue;
	}
	else{
		for(i=0;i<n;i++)
		{
			if((arr[i]>=97&&arr[i]<=122)&&(arr[i+1]>=97&&arr[i+1]<=122))
			{
				ans++;
				i+=1;
			}
			else if((arr[i]>=65&&arr[i]<=90)&&(arr[i+1]>=65&&arr[i+1]<=90))
			{
				ans++;
				i+=1;
			}
			else
			i+=1;
		}
		printf("%d\n",ans);
	}
	}
	return 0;
}
