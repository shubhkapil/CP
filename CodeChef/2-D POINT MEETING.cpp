#include<bits/stdc++.h>
using namespace std;

int same_coordinates(int x[],int y[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(x[i]==y[i])
		{
			return x[i];
		}
	}
	return -10000000000;
}


int maximum(int x[],int y[],int n)
{
	int maxi=0,maxi2=0,maxx,maxy;
	for(int i=0;i<n;i++)
	{
		int c=1;
		for(int j=i+1;j<n;j++)
		{
			if(x[j]==x[i])
			{
				c++;
			}
		}
		if(maxi<c)
		{
			maxi=c;
			maxx=x[i];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		int c=1;
		for(int j=i+1;j<n;j++)
		{
			if(y[j]==y[i])
			{
				c++;
			}
		}
		if(maxi<c)
		{
			maxi=c;
			maxy=y[i];
		}
	}
	
	if(maxi>maxi2)
	{
		return maxx;
	}
	else
	{
		return maxy;
	}
}

int check(int x,int y,int n, int ans)
{
	int k;

		for(k=-1000000000;k<=1000000000;k++)
		{
			if((x+k==ans && y==ans) || (x+k==ans && y-k==ans))
			{
				return 1;
			}
		}
		return 0;
}


int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		int ans1,ans2,ans,sum=0;
		cin>>n;
		int x[n];
		int y[n];
		
		for(i=0;i<n;i++)
		{
			cin>>x[i];
		}
		
		for(i=0;i<n;i++)
		{
			cin>>y[i];
		}
		
		ans1= same_coordinates(x,y,n);
		cout<<sum<<endl;
		cout<<ans1<<endl;
		
		if(ans1!=-10000000000)
		{
			for(i=0;i<n;i++)
			{
				if(x[i]!=ans1 && y[i]!=ans1 && abs(x[i])==abs(y[i]))
				{
					sum++;
					cout<<"sum1 "<<sum<<endl;
				}
				else if(x[i]!=ans1 && y[i]==ans1)
				{
					sum++;
					cout<<"sum2 "<<sum<<endl;
				}
				
				else if(x[i]==ans1 && y[i]!=ans1)
				{
					sum++;
					cout<<"sum3 "<<sum<<endl;
				}
				
				else if(x[i]!=ans1 && y[i]!=ans1 && abs(x[i])!=abs(y[i]))
				{
					ans=check(x[i],y[i],n,ans1);
					
					if(ans){
						sum++;
					}
					else
					{
						sum+=2;
					}
				}
				
			}
			
		}
		else
		{
			ans2 = maximum(x,y,n);
			
			cout<<" ans2 "<<ans2<<endl; 
			for(i=0;i<n;i++)
			{
				if(x[i]!=ans2 && y[i]!=ans2 && abs(x[i])==abs(y[i]))
				{
					sum++;
					cout<<sum<<endl;
				}
				
				else if(x[i]!=ans2 && y[i]==ans2)
				{
					sum++;
					cout<<sum<<endl;
				}
				
				else if(x[i]==ans2 && y[i]!=ans2)
				{
					sum++;
					cout<<sum<<endl;
				}
				
				else if(x[i]!=ans1 && y[i]!=ans1 && abs(x[i])!=abs(y[i]))
				{
					ans=check(x[i],y[i],n,ans1);
					
					if(ans){
						sum++;
					}
					else
					{
						sum+=2;
					}
				}
	
			}
		}
		
		cout<<sum<<endl<<endl;
	}
	return 0;
	
}
