
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int t=0;
	int mp[5]={0};
	for(int i = 0;i<n;i++)
	{
		cin>>t;
		mp[t]++;
	}
	// }
	// cout<<mp[1]<<" "<<mp[2]<<" "<<mp[3]<<" "<<mp[4]<<endl;
	int threeOnePair = min(mp[3],mp[1]);
	mp[3]-=threeOnePair;
	mp[1]-=threeOnePair;
	mp[4]+=threeOnePair;
	
	mp[4]+= (mp[2]/2);
	mp[2]%=2;

	if(mp[1]>0)
	{
		if(mp[2]==1 && mp[1]>=2)
		{
			mp[4]+=1;
			mp[2]--;
			mp[1]-=2;
		} 
	}
	mp[4]+=mp[1]/4;
	mp[1]%=4;
	
	// cout<<mp[1]<<" "<<mp[2]<<" "<<mp[3]<<" "<<mp[4]<<endl;
	int ans = (mp[1]>0) ? 1+mp[2]+mp[3]+mp[4] : mp[2]+mp[3]+mp[4];
	cout<<ans<<endl;  
	return;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	
	solve();
}