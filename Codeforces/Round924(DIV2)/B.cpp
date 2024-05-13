
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
	vector<int> v = oneD(n);
	set<int> s;
	for(int i: v)
		s.insert(i);
	v.clear();
	for(int i : s)
		v.push_back(i);

	sort(v.begin(),v.end());

	int maxi = 0;
	for(int i = 0;i<v.size();i++)
	{
		int val = v[i]+n;
		auto lb = lower_bound(v.begin(),v.end(),val);
		maxi = max(maxi, lb - v.begin()-i);
	}	

	cout<<maxi<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t,n;
	cin>>t;
	while(t--)
	{
		solve();
	}
}