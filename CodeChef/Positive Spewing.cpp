#include<bits/stdc++.h>
using namespace std;
//
//int main()
//{
//	int t,n,k;
//	cin>>t;
//	
//	while(t--)
//	{
//		cin>>n>>k;
//		int a[n],i,sum=0;
//		
//		for(i=0;i<n;i++)
//		{
//			cin>>a[i];
//		}
//		
//		while(k>0)
//		{
//			for(i=0;i<n;i++)
//			{
//				if((i == n-1) && a[i]>0)
//				{
//					a[0]+=1;
//					a[i-1]+=1;
//					i++;
//				}
//				else
//				{
//					if(a[i]>0)
//					{
//					a[i+1]+=1;
//					a[i-1]+=1;
//					i++;
//					
//					}
//				}
//			}
//			k--;
//		}
//		
//		for(i=0;i<n;i++)
//		{
//			cout<<a[i]<<" "<<endl;
//			sum+=a[i];
//		}
//		
//		cout<<sum<<endl;
//	}
//}
//


int main()
{
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<int> v1,v2;
		int ele,sum=0;
		for(i=0;i<n;i++)
		{
			cin>>ele;
			v1.push_back(ele);
			v2.push_back(ele);
		}
		
		while(k--)
		{
			
			for(i=0;i<n;i++)
			{
				if(i==n-1)
				{
					if(v1[i]>0)
					{
						v2[0]+=1;
						v2[i-1]+=1;
					}
				}
				else
				{
					if(v1[i]>0)
					{
						v2[i+1]+=1;
						v2[i-1]+=1;
					}
				}
			}
			for(i=0;i<n;i++)
			{
				cout<<v2[i]<<" ";
			}
			cout<<endl;
			v1=v2;
		}
		
		for(i=0;i<n;i++)
			{
				sum+=v2[i];
			}
			cout<<sum<<endl;
		}
	
	return 0;
}

