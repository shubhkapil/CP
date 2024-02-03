
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

bool isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return true;
    return false;
}

int solve(int n,int m, string s1,string s2)
{
	if(n>=m && isSubstring(s1,s2)) return 0;

	int cnt = 0;
	do
	{
		s1 += s1;
		n = s1.size();
		cnt++;
		if(isSubstring(s1,s2))
			break;
	}while(n<=2*m);

	return (isSubstring(s1,s2)==true) ? cnt : -1;
	
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n,m;
	while(t--)
	{
		string s1,s2;
		cin>>n>>m;
		cin>>s1>>s2;
		cout<<solve(n,m,s1,s2)<<endl;
	}
}