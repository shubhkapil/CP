
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;

// void solve()
// {
// 	string s;
// 	cin>>s;
// 	map<ll,ll> mp;
// 	for(auto& x : s)
// 	{
// 		if(x!='+') mp[x-'0']++;
// 	}
// 	string ans = "";
// 	for(auto m : mp)
// 	{
// 		for(ll i = 0 ;i<m.second;i++)
// 		{
// 			ans+=(char)('0'+m.first);
// 			ans+="+";
// 		}
// 	}
// 	ans.erase(ans.size()-1,1);
// 	cout<<ans;
// 	return;

// }
// int main()
// {
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
// 	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
// 	#endif
// 	solve();
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int n = s.size();
	sort(s.begin(),s.end());
	s.erase(0,n/2);

	string ans = "";
	ans+=s[0];
	for(int i =1;i<=n/2;i++)
	{
		ans+="+";
		ans+=s[i];
	}
	cout<<ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	solve();
}