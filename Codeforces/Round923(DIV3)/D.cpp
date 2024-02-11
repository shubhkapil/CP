
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

	int n,q;
	cin>>n;
	vector<int> nums(n);
	for(int i = 0;i<n;i++) cin>>nums[i];

	cin>>q;

	vector<int> a(n);
	a[n-1] = -1;
	for(int i = n-2;i>=0;i--)
	{
		if(nums[i+1]!=nums[i])
			a[i] = i+1;
		else
			a[i] = a[i+1];
	}


	int l,r;

	while(q--)
	{
		cin>>l>>r;
		int diff_index = a[l-1];
		if(diff_index != -1 && diff_index<r)
		{
			cout<<l<<" "<<diff_index+1<<endl;
		}
		else
		{
			cout<<"-1 -1"<<endl;
		}
	}
	cout<<endl;
	return;
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