#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j;
	long long int m,n,x;
	cin>>t;
	
	
	while(t--)
	{
		int pos=0,temp=1;
		cin>>n>>m>>x;
		int arr[n][m];
		
		for(j=0;j<m;j++)
		{
			for(i=0;i<n;i++)
			{
				arr[i][j]=temp;
				temp++;
			}
		}
		
		for(j=0;j<m;j++)
		{
			for(i=0;i<n;i++)
			{
				if(arr[i][j]==x)
				{
					pos=arr[i][j];
					break;
				}
			}
			if(pos != 0)
			{
				break;
			}
		}
		int t=0,p=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				p++;
				if(arr[i][j]==pos)
				{
					cout<<p;
					t=1;
					break;
				}
				if(t==1)
				{
					break;
				}
			}
		}
		
	}
	return 0;
}
