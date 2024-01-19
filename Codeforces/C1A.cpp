
#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;

		int arr[n];
		for(int i = 0 ;i<n;i++)
			cin>>arr[i];
			
		int f=1;
		for(int i = 0;i<n;i++)
		{
			if(arr[i]==k)
			{
				f=0;
				cout<<"YES"<<endl;
			}
		}
		if(f==1)
			cout<<"NO"<<endl;
	} 
}