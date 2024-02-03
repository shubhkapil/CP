
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n,int x,vector<int> v)
{
	
	int maxDiff = (v[0] - 0);

	for(int i = 1;i<n;i++)
		maxDiff = max(maxDiff,v[i]-v[i-1]);

	maxDiff = max(maxDiff,(x-v[n-1])*2);

	return maxDiff;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n,x;
	while(t--)
	{
		cin>>n>>x;
		int ele;
		vector<int> v;
		for(int i = 0;i<n;i++)
		{
			cin>>ele;
			v.push_back(ele);
		}
		cout<<solve(n,x,v)<<endl;
	}
}