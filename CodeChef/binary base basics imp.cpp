 #include<iostream>
using namespace std;


int main()
{
	int n,t,k;
	cin>>t;
	while(t--)
	{
		int flag=0;
		int c=0;
		int n1=0,n0=0;
		cin>>n;
		cin>>k;
		string s;
		cin>>s;
		
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				n1++;
			}
			else
			{
				n0++;
			}
		}
		
		for(int i=0;i<n/2;i++)
		{
			if(s[i]!=s[n-1-i])
			{
				c++;
			}
		}

		if(n%2==0)
		{
			if(c%2==0)
			{
				if(k%2==0)
				{
					while(c<=n)
					{
						if(c==k)
						{
							flag=1;
							cout<<"YES"<<endl;
							break;
						}
						c+=2;
					}
				}
				else
				{
					flag=0;
				}
				
			}
			else
			{
				if(k%2==0)
				{
					flag=0;	
				}
				else
				{
					while(c<=n)
					{
						if(c==k)
						{
							flag=1;
							cout<<"YES"<<endl;
							break;
						}
						c+=2;
					}
				}
			}
		}
		else
		{
			if(c%2==0)
			{
				if(k%2==0)
				{
					while(c<=n)
					{
						if(c==k)
						{
							
							flag=1;
							cout<<"YES"<<endl;
							break;
						}
						c+=2;
					}
				}
				else
				{
					c+=1;
					while(c<=n)
					{
						if(c==k)
						{
							flag=1;
							cout<<"YES"<<endl;
							break;
						}
						c+=2;
					}
				}
			}
			else
			{
				if(k%2==0)
				{
					c+=1;
					while(c<=n)
					{
						if(c==k)
						{
							flag=1;
							cout<<"YES"<<endl;
							break;
						}
						c+=2;
					}
				}
				else
				{
					while(c<=n)
					{
						if(c==k)
						{
							flag=1;
							cout<<"YES"<<endl;
							break;
						}
						c+=2;
					}
				}
			}
		}
		
		if(flag==0)
		{
			cout<<"NO"<<endl;
		}
	
	}	
	return 0;
}

