
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, vector<ll> v)
{
	int maxi = 1;
	int cnt = 1;

	for(int i = 1;i<n;i++)
	{
		if(v[i]>v[i-1])
			cnt++;
		else
		{
			maxi = max(cnt,maxi);
			cnt = 1;
		}
	}
	maxi = max(cnt,maxi);
	cout<<maxi;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll n;
	vector<ll> v;
	ll ele;

	cin>>n;
	for(ll i = 0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	solve(n,v);
}
