#include<bits/stdc++.h>
using namespace std;

struct bus
{
    char c;
    int n;
};

// int check(int no,int j)
// {
//     for(int i=0;i<j;i++)
//     {
//         if()
//     }
// }

int main()
{
    int t,i,n,m,q,j,flag=0;
    cin>>t;
    bus seat[q];
    while(t--)
    {
        int ans=2;
        cin>>n>>m>>q;
        for(i=0;i<q;i++)
        {
            cin>>seat[i].c>>seat[i].n;
        }

        for(i=0;i<q;i++)
        {
            if(m==0 && seat[i].c=='+')
            {
                ans--;
                break;
            }
            if(seat[i].c=='+')
            {
                m--;
            }
            else
            {
                m++;
            }
        }

        for(i=0;i<q;i++)
        {
            if(seat[i].c=='-')
            {
                for(j=0;j<i;j++)
                {
                    if((seat[j].n!=seat[i].n) || (seat[j].c!='+'))
                    {
                        ans--;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
        }
        if(ans==2)
        {
            cout<<"Consistent"<<endl;
        }
        else
        {
            cout<<"Inconsistent"<<endl;
        }
    }
    return 0;
}