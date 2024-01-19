
#include<bits/stdc++.h>
#define ll long long
using namespace std;


//used for customize sorting according to a particular element (first/second ele of pair)
//> - minHeap. < - maxHeap
class Compare
{
public:
	bool operator()(pair<int,int> a, pair<int,int> b)
	{
		return a.first > b.first;
	}
};

void solve()
{
	int n;
	int s;
	cin>>s>>n;
	int a,b;
	priority_queue<pair<int,int>,vector<pair<int,int>>,Compare> pq;
	for(int i = 0;i<n;i++)
	{
		cin>>a>>b;
		pq.push({a,b});
	}

	pair<int,int> p;
	

	while(!pq.empty())
	{
		p = pq.top();
		if(s>p.first)
			s+=p.second;
		else
			break;
		pq.pop();
	}
	if(pq.empty())
		cout<<"YES";
	else
		cout<<"NO";
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	
	solve();

}