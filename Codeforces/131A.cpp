
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isValid(string s)
{
	for(int i = 1; i<s.size();i++)
	{
		if(islower(s[i]))	return false;
	}
	return true;
}

void solve()
{
	string s;
	cin>>s;
	if(isValid(s))
	{
		s[0] = (islower(s[0])) ? toupper(s[0]) : tolower(s[0]);

		for(int i = 1;i<s.size();i++)
			s[i] = tolower(s[i]);
	}
	else if(s.size()==1)
		s[0] = toupper(s[0]);
	

	cout<<s;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	solve();
}
