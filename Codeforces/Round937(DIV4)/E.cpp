
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

int diff(string s1,string s2)
{
	int cnt = 0;
	for(int i = 0;i<s1.size();i++)
	{
		if(s1[i]!=s2[i])
			cnt++;
	}
	return cnt;
}

string concat(string s,int t)
{
	string ans = "";
	while(t--)
		ans+=s;
	return ans;
}

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n%2!=0)
	{
		cout<<n<<endl;
	}
	else
	{
		string s1 = s.substr(0,n/2);
		int t = 2;
		string temp = concat(s,t);
		string ans = s;
		while(diff(s1,temp)<=1 && s1.size()>1)
		{
			// string temp = s1.substr(0,s1.size()/2);
			// s2 = s1.substr(s1.size()/2,s1.size()/2);
			// s1 = temp;
			ans = s1;
			s1 = s1.substr(0,s1.size()/2);
			t*=2;
			temp = concat(s,t);
		}
		cout<<ans.size()<<endl;
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