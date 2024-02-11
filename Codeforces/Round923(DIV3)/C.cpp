
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

string solve(int n,int m,int k,vector<int> a,vector<int> b)
{
	int ae = k/2;
	int be = k/2;
	map<int,int> am,bm;	
	for(int i:a)
		am[i]++;
	for(int i:b)
		bm[i]++;
	int i = 1;
	vector<int> both;
	while((ae>0 || be>0) && i<=k)
	{
		if(am.find(i)==am.end() && bm.find(i)==bm.end())
			return "NO";
		else if(am.find(i)!=am.end() && bm.find(i)!=bm.end())
		{
			both.push_back(i);
			i++;
		}
		else if(am.find(i)!=am.end() && bm.find(i)==bm.end())
		{
			if(ae<=0)
				return "NO";
			i++;
			ae--;
		}
		else if(bm.find(i)!=am.end() && am.find(i)==am.end())
		{
			if(be<=0)
				return "NO";
			i++;
			be--;
		} 
	}

	if(ae+be != both.size() || i!=k+1)
		return "NO";

	return "YES";
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
		int n,m,k;
		cin>>n>>m>>k;
		vector<int> a = oneD(n);
		vector<int> b = oneD(m);
		cout<<solve(n,m,k,a,b)<<endl;
	}
}