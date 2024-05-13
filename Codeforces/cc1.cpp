
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> oneD(int n)
{
	vector<ll> v;
	ll ele;
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

int solve()
{
	int n,k;
	cin>>n>>k;
	vector<long long> v = oneD(n);
	if(n==1)
		return v[0];
	int midx = 0;
	long long mini = INT_MAX;
	int idx=0;
	for(ll i : v)
	{
		if(mini<i)
		{
			mini=i;
			midx=idx;
		}
		idx++;
	}

	
	while(k)
	{
		
	}
	

	long long ans = 0;
	for(long long i : v)
		ans+=i;

	return ans;
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
		cout<<solve()<<endl;
	}
}