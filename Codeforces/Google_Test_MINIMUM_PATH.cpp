
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n ,m;
	while(t--)
	{
		cin>>n>>m;
		int a[n][m];
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<m;j++)
			    cin>>a[i][j];
		}
		
		if(m==1)
		{
		    int mini = INT_MAX;
		    int maxi = INT_MIN;
		    for(int i=0;i<n;i++)
		    {
		        mini = min(a[i][0],mini);
		        maxi = max(a[i][0],maxi);
		    }
		    cout<<maxi-mini<<endl;
		    continue;
		}
		
		pair<int,int> dp[n][m];

    	for(int i = 0;i<n;i++)
    		dp[i][0].first = dp[i][0].second = a[i][0];
    
    	for(int j=1;j<m;j++)
    	{
    		for(int i = 0;i<n;i++)
    		{
    			int up = INT_MAX;
    			int down = INT_MAX;
    
    			int val = abs(a[i][j] - a[i][j-1]);
    			if(i-1>=0)
    				up = abs(a[i][j] - a[i-1][j-1]);
    			if(down<n)
    				down = abs(a[i][j] - a[i+1][j-1]);
    
    			int mini = min(val,min(up,down));
    
    			if(mini==val)
    			{
    				dp[i][j].first = min(a[i][j],dp[i][j-1].first);
    				dp[i][j].second = max(a[i][j],dp[i][j-1].second);
    			}
    			else if(mini == up)
    			{
    				dp[i][j].first = min(a[i][j],dp[i-1][j-1].first);
    				dp[i][j].second = max(a[i][j],dp[i-1][j-1].second);
    			}
    			else
    			{
    				dp[i][j].first = min(a[i][j],dp[i+1][j-1].first);
    				dp[i][j].second = max(a[i][j],dp[i+1][j-1].second);
    			}
    
    		}
    	}
    	
    
        int ans = INT_MAX;
        for(int i = 0;i<n;i++)
        	ans = min(ans,dp[i][m-1].second - dp[i][m-1].first);
        	
        cout<<ans<<endl;
	    
	}
}

//Test Case:
// 1
// 3
// 7
// 401985452 575868214 942407086 320181553 768234536 66803344 367028224
// 751342696 215655921 229623304 375217695 954855487 6076575 839014783
// 758015859 895825151 205079109 717281271 215153271 68031912 906487032