
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

int solution(vector<int> &A)
{
	int maxSum = -1;

	for(int i =0;i<A.size();i++)
	{
		for(int j = 1;j<A.size();j++)
		{
			if(!haveCommonDigit(A[i],A[j]))
			{
				int currentSum = A[i] + A[j];
				maxSum = max(maxSum,currentSum);
			}
		}
	}
}

void solve()
{
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