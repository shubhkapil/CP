#include<iostream>
#include<math.h>
using namespace std;

struct change
{
	int pos,x,y;
};
int main()
{
	int n,q,i,j,pos,x,y;
	cin>>n>>q;
	int l=n*(n-1)/2;
	int arr[n][2],arr2[l],arr3[l],res[q];
	struct change s[q];
	for (i=0;i<q;i++)
	{
		cin>>s[i].pos;
		cin>>s[i].x;
		cin>>s[i].y;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int k=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			arr2[k]=pow((arr[i][0] - arr[j][0]),2) + pow((arr[i][1] - arr[j][1]),2);
			k++;
		}
	}
	
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(arr2[j]>arr2[j+1])
			{
				int temp = arr2[j+1];
				arr2[j+1]=arr2[j];
				arr2[j]=temp;
			}
		}
	}
	
	
	int t=0;
	while(q--)
	{
	
	arr[s[t].pos-1][0]=s[t].x;
	arr[s[t].pos-1][1]=s[t].y;
	
	k=0;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			arr3[k]=pow((arr[i][0] - arr[j][0]),2) + pow((arr[i][1] - arr[j][1]),2);
			k++;
		}
	}
	
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(arr3[j]>arr3[j+1])
			{
				int temp = arr3[j+1];
				arr3[j+1]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	int m=0;
	int f=0;
	while(m<l)
	{
		if(arr3[m]>arr2[m])
		{
			res[t]=1;
			f=1;
			break;
		}
		else if(arr3[m]<arr2[m])
		{
		
			res[t]=-1;
			f=1;
			break;
		}
		else
		{
			m++;
		}
	}
	if(f==0)
	{
		res[t]=0;
	}
	
	t++;
	}
	
for(i=0;i<q;i++)
{
	if(res[i]==-1)
	{
		cout<<"larger";
	}
	else if(res[i]==1)
	{
		cout<<"smaller";
	}
	else
	{
		cout<<"equal";
	}
}
}




