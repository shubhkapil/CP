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

bool solve(int n,int k,vector<int> v)
{
	for(int i =0;i<n;i++)
	{
		if(v[i]==k)
			return true;
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n,k;
	while(t--)
	{
		cin>>n>>k;
		vector<int> v = oneD(n);
		solve(n,k,v)==true ? cout<<"Yes" : cout<<"No";
		cout<<endl;
	}
}