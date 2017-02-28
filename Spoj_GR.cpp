#include<iostream>
using namespace std;
int main(){                          // AC in one go!!!!
	int n,t;
	cin>>n>>t;
	int two[n][n];
	int i,j,cnt=1,ext;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			two[i][j]=cnt;
			cnt++;
		}
	}
	if(t%4==0)
	{
		cout<<"Atef\n";
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			cout<<two[i][j]<<" ";
		
		cout<<"\n";
	}
}
	else if(t%4==1){
		cout<<"Sameh\n";
		cnt=n*n-(n-1);
		ext=n*n-(n-1);
		for(i=0;i<n;i++){
			cnt=ext;
			for(j=0;j<n;j++){
			two[i][j]=cnt;
			cnt-=n;	
			}
			ext++;
		}
			for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			cout<<two[i][j]<<" ";
		
		cout<<"\n";
	}
	}
	else if(t%4==2){
		cout<<"Ameen\n";
		cnt=n*n;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
		{
			two[i][j]=cnt;
			cnt--;
		}
		}
				for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			cout<<two[i][j]<<" ";
		
		cout<<"\n";
	}
}
	else if(t%4==3){
		cout<<"Shafeek\n";
		cnt=n;
		ext=n;
		for(i=0;i<n;i++){
			cnt=ext;
			for(j=0;j<n;j++)
			{
				two[i][j]=cnt;
				cnt+=n;
			}
			ext--;
		}
					for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			cout<<two[i][j]<<" ";
		
		cout<<"\n";
	}
		
	}
	return 0;
}
