
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> oneD(int n)
{
	vector<int> v;
	int ele;
	for(int i = 0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	return v;
}

int solve(int n, string s)
{
	int maxi = 0;
	int cnt = 0;
	for(int i = 0;i<s.size();i++)
	{
		if(s[i]=='#')
		{
			if(cnt>=3)	return 2;
			maxi += cnt;
			cnt = 0;
		}
		else
			cnt++;
	}
	if(cnt>=3) return 2;
	maxi+=cnt;
	return maxi;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n;
	string s;
	while(t--)
	{
		cin>>n>>s;
		cout<<solve(n,s)<<endl;
	}
}