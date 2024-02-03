
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(int n)
	return !(n%3==0);
	
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		solve(n)==true ? cout<<"First" : cout<<"Second";
		cout<<endl;
	}
}