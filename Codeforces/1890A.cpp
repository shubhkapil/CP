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

bool solve(vector<int> v)
{
	if(v.size()==2)	return true;

	map<int,int> mp;
	for(int i : v)
		mp[i]++;


	if(mp.size()==1) return true;
	else if(mp.size() == 2)
	{
		vector<int> temp;
		for(auto i: mp)
			temp.push_back(i.second);
		
		return abs(temp[0]-temp[1])<=1;
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
	int n;
	while(t--)
	{
		cin>> n;
		vector<int> v = oneD(n);
		solve(v)==true ? cout<<"Yes" : cout<<"No";
		cout<<endl;
	}
}