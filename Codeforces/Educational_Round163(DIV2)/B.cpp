
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

bool order(int n)
{
	int next = INT_MAX;

	while(n>0)
	{
		int t = n%10;
		if(t>next)
			return false;
		next = t;
		n/=10;
	}
	return true;
}
void solve()
{
	int n;
	cin>>n;
	vector<int> v = oneD(n);
	vector<int> temp;
	int prev = 0;

	for(int i:v)
	{
		if(order(i) && i!=0)
		{
			stack<int> st;

			while(i>0)
			{
				int t = i%10;
				st.push(t);
				i/=10;
			}
			if(prev>st.top())
			{
				cout<<"NO"<<endl;
				return;
			}
			while(!st.empty())
			{
				temp.push_back(st.top());
				st.pop();
			}
		}
		else
			temp.push_back(i);

		prev = temp[temp.size()-1];
	}

	if(isSorted(temp))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

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