#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> oneD(int n)
{
	vector<int> v(n);
	for(int i = 0;i<n;i++)
		cin>>v[i];

	return v;
}

bool isSorted(vector<int> v)
{
	vector<int> sv = v;
	sort(sv.begin(),sv.end());
	return v==sv;
}

void solve()
{
	int n;
	cin>>n;
	map<int,int> mp;
	int ele;
	for(int i = 0;i<n;i++)
	{
		cin>>ele;
		mp[ele]++;
	}
	int cnt = 0;
	for(auto i : mp)
		cnt+= i.second/3;
	
	cout<<cnt<<endl;
	
}
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
		solve();
	}
}