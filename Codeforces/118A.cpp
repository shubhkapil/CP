
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isVowel(char c)
{
	c= toupper(c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U' ||c=='Y')
		return true;
	return false;
}

void solve()
{
	string s;
	cin>>s;
	string ans = "";
	for(auto&x : s)
	{
		if(!isVowel(x))
		{
			ans+=".";
			ans+=tolower(x);
		}
	}
	cout<<ans;
	return ;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	solve();
}