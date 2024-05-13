
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
	vector<string> s(n);
	vector<int> t;

	for(int i = 0;i<n;i++)
		cin>>s[i];

	for(string str : s)
	{
		int cnt =0;
		for(char c : str)
		{
			if(c=='1')
				cnt++;
		}
		if(cnt)
			t.push_back(cnt);
	}

	if(t[0]==t[t.size()-1])
		cout<<"SQUARE";
	else
		cout<<"TRIANGLE";
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