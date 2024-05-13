
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
	vector<int> a(n);

	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int j = n-2;
	while(a[j]==a[j+1])
		j--;

	if(j==-1)
	{
		cout<<"-1"<<endl;
		return;
	}
	j++;
	cout<<j<<" "<<n-j<<endl;

	for(int i = 0;i<j;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(;j<n;j++)
		cout<<a[j]<<" ";
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