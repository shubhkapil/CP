#include<iostream>
using namespace std;

int main()
{
	int ls;
	ls=4/5;
	cout<<ls;
	int t,k,i,j;
	cin>>t;
	while(t--)
	{
		cin>>k;
		cout<<k<<endl;
		for(i=1;i<=100;i++)
		{
			for(j=1;j<=100;j++)
			{
				int s=i+j;
				float l= i/s;
				int m = l*100;
				cout<<i<<"-"<<j<<"-"<<l;
				if(m==k)
				{
					cout<<i+j;
					break;
				}
			}
		}
	}
	return 0;
}

