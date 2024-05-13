
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

	vector<int> ans;
	ans.push_back(v[0]);

	for(int i = 1;i<n;i++)
	{
		if(v[i] >= v[i-1])
			ans.push_back(v[i]);
		else
		{
			ans.push_back(v[i]);
			ans.push_back(v[i]);
		}
	}

	cout<<ans.size()<<endl;
	for(int i : ans)
		cout<<i<<" ";
	cout<<endl;
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