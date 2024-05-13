
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
	string ans = "";
	if(n<=28)
	{
		ans+='a';
		ans+='a';
		ans+= (char)('a'+n-2-1);
	}
	else
	{
		vector<char> v(3);

		v[2] = 'z';
		n-=26;
		if(n>26)
		{
			v[1] = 'z';
			v[0] = (char)('a' + n-26-1);
		} 
		else
		{
			v[1] = (char)('a' + n-2);
			n-=1;
			v[0] = 'a';
		}

		for(char i:v)
			ans+=i;
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