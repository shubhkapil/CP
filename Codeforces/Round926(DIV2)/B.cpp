
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
	int ans = 0;
	int totD = 4*n - 2;
	if(k==totD)
		ans=n*2;
	else if(k> totD/2 && k<totD)
	{
		ans+=n;
		k -= n*2;
		ans+= (k%2==0) ? k/2 : k/2 +1;
	}
	else
	{
		ans = (k%2==0) ? k/2 : k/2 +1;
	}

	cout<<ans<<endl;
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