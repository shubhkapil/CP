
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n ; 
	cin>>n;
	priority_queue<int> pq;
	int ele;
	for(int i = 0;i<n;i++)
	{
		cin>>ele;
		pq.push(ele);
	}

	int ans=0;
	while(!pq.empty())
	{
		int topEle = pq.top();
		cout<<topEle<<" ";
		pq.pop();
		if(!pq.empty() && pq.top()==topEle)
		{
			while(!pq.empty() && pq.top()==topEle)
				pq.pop();
		}
		else
		{
			ans++;
			pq.push(topEle/2);
		}
		cout<<ans<<endl;
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
