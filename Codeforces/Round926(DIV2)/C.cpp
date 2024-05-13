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
	int k,x,a;
	cin>>k>>x>>a;

	int res = a-(x);

	if(res<=0 || x-1>k)
	{
		cout<<"NO"<<endl;
		return;
	}
	else
	{
		res *= k;
		if(res>a)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
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