
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isSorted(vector<int> v)
{
	vector<int> sv = v;
	sort(sv.begin(),sv.end());

	for(int i = 0;i<v.size();i++)
	{
		if(v[i]!=sv[i])
			return false;
	}
	return true;
}

bool solve(int n,int k,vector<int> &v)
{
	if(k>=2 || isSorted(v))
		return true;
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	int t;
	cin>>t;
	int n,k,ele;
	while(t--)
	{
		cin>>n>>k;
		vector<int> v;
		for(int i = 0;i<n;i++)
		{
			cin>>ele;
			v.push_back(ele);
		}
		string ans = solve(n,k,v)==true ? "YES" : "NO";
		cout<<ans<<endl;
	}
}