
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	string s1,s2;
	cin>>s1>>s2;
	for (auto& x : s1) {
        x = tolower(x);
    }
    for (auto& x : s2) {
        x = tolower(x);
    }
	cout<<s1.compare(s2);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif

		solve();
	
}