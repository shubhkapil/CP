
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

int solve(vector<int> v)
{
	if(v[0]>=0)
		return v[0];
	else
	{
		int i =1;

		for(;i<v.size();i++)
		{
			if(v[i]>=0)
				break;
		}
		return min(abs(v[i-1]),v[i]);
	} 
	return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	int n;
	cin>>n;
	vector<int> v = oneD(n);
	cout<<solve(v)<<endl;
}