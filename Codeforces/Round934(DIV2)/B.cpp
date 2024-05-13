
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
	int n,k;
	cin>>n>>k;
	vector<int> v = oneD(2*n);

	vector<int> v1,v2;
	for(int i = 0;i<n;i++)
		v1.push_back(v[i]);
	for(int i = n;i<2*n;i++)
		v2.push_back(v[i]);

	map<int,int> mp1,mp2;
	for(int i : v1)
		mp1[i]++;
	for(int i : v2)
		mp2[i]++;

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	
	vector<int> ans1,ans2;
	
	int i = 0;
	while(i<n-1&& k>0)
	{
		int x = v1[i]^v1[i+1];
		bool f = false;
		for(int j=0;j<n;j++)
		{
			if(mp2[v2[j]]==0)
				continue;
			mp2[v2[j]]--;
			if(mp2.find(x^v2[j])!=mp2.end())
			{
				ans1.push_back(v1[i]);
				ans1.push_back(v1[i+1]);
				ans2.push_back(v2[j]);
				ans2.push_back(x^v2[j]);
				mp2[x^v2[j]]--;
				f=true;
				break;
			}
			mp2[v2[j]]++;
		}
		if(f)
		{
			i+=2;
			k--;
		}
		else
			i++;
	}
	for(int i :ans1)
		cout<<i<<" ";
	cout<<endl;
	for(int i :ans2)
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