
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

int solve(int n,string s)
{
    int ans = 0;
    for(int i = 0;i<n-1;i++)
    {
        if(s[i]=='*' && s[i+1]=='*')
            return ans;
        ans += (int)(s[i]=='@');
    }
    ans += (int)(s[n-1]=='@');
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    ll t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cout<<solve(n,s)<<endl;
    }
}