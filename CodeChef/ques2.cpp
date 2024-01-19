#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,i,p,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        i=1;
        while((i*i)<=n)
        {
            i++;
        }
        i=i-1;
        cout<<i*a;

    }
    return 0;
}