
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

int solve()
{
	string s;
	cin>>s;
	int n = s.size();
	int ans = 0;
	int j = n-1;
	int i = n-1;
	while(j>=0)
	{
		int cnt = 0;
		while(j>=0 && s[j]=='0')
			j--;
		int idx = j;
		while(j>=0 && s[j]=='1')
			j--;
		
		ans+= (cnt+1)*(i-idx);
		i=j;
	}
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