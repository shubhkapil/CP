#include<iostream>

#include<string.h>
using namespace std;

class coWIN
{
	int Bnumber;
	char name[20];
	char labortaryname[20];
	int price;
	int availability;
	char place[20];
	
	public:
	
	void getdata()
	{
		cin>>Bnumber;
		gets(name);
		gets(labortaryname);
		cin>>price;
		cin>>availability;
		gets(place);
	}
	
	void showdata()
	{
		cout<<Bnumber;
		cout<<name;
		cout<<labortaryname;
		cout<<price;
		cout<<availability;
		cout<<place;
	}
	void search_given_place(int n, char temp[20])
	{

			if(strcmp(place,temp)==0)
			{
			showdata();
			}
		
	}
	void search_given_name(int n, char temp[20])
	{
		
			if(strcmp(labortaryname,temp)==0)
			{
			showdata();
			}
		
	}
	void search_given_num(int n,int num)
	
	{
			if(availability>num)
			{
			showdata();
			}
	}
	
};


int main()
{
	int n,i;
	cin>>n;
	coWIN c[n];
	
	for(i=0;i<n;i++)
	{
		c[i].getdata();
	}
	int ch;
	switch(ch)
	{
		case 1: char a[20];
				gets(a);
				for(i=0;i<n;i++)
				{
				
				c[i].search_given_place(n,a);
				}
				break;
				
		case 2: char b[20];
				gets(b);
				for(i=0;i<n;i++)
				{
				c[i].search_given_place(n,b);
				}
				break;
				
		case 3: int num1;
				cin>>num1;
				for(i=0;i<n;i++)
				{
				c[i].search_given_num(n,num1);
				}
				break;
				
		default:cout<<"wrong input";
	}
	return 0;
}
