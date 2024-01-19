#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int temp=n%4;
		if(temp>0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
