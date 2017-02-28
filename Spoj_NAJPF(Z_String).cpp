#include<bits/stdc++.h>
using namespace std;
void getz(string concat,int z[]){               // AC using z string !!!
	int l=0,r=0,i,k;
	int n=concat.length();
	for(i=1;i<n;i++){
		if(i>r)
		{
			l=i;
			r=i;
			while(r<n&&concat[r-l]==concat[r])
			r++;
			z[i]=r-l;
			r--;
		}
		else
		{
			k=i-l;
			if(z[k]<r-i+1)
			z[i]=z[k];
			else
			{
				l=i;
				while(r<n&&concat[r-l]==concat[r])
				r++;
				z[i]=r-l;
				r--;
			  }
			}
			
		}
	}
int main(){
	int t;
	scanf("%d",&t);
	string p,ta;
	while(t--){
		cin>>ta>>p;
		vector<int>v;
		int i;
		string concat=p+"$"+ta;
		int l=concat.length();
		int z[l];
		getz(concat,z);
		int n=p.length();
		z[0]=-999;
		for(i=1;i<l;i++){
			if(z[i]==n)
			{
				v.push_back(i-n);
			}
		}
		int u=v.size();
		
		if(u!=0){
		printf("%d\n",u);
		for(i=0;i<u;i++)
		printf("%d ",v[i]);
		printf("\n\n");
	}
	else
	printf("Not Found\n\n");
	}
	return 0;
}
