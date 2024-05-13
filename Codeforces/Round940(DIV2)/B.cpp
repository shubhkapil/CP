
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
	int n,sum;
	cin>>n>>sum;
	if(n==1)
	{
	    cout<<sum<<endl;
	    return;
	}
	int s = 0;
	vector<int> ans;
	ans.push_back(0);
	for(int i = 0;(s+(1<<i))<=sum && i<30;i++)
	{
		s+=(1<<i);
		ans[0]+= (1<<i);
	}

	ans.push_back(sum-s);
 
	while(ans.size()<n)
		ans.push_back(0);

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