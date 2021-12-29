#include<bits/stdc++.h>
using namespace std;
int n,m;
char aa[101]; 
int main()
{
	freopen("mima.txt","w",stdout);
	for(int i=2;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			int f=0;
			while(f==0)
			{
			m=rand()%2;
			if(m==1)
			n=rand()%25+97;
			else
			n=rand()%25+65;
			aa[j]=n;
			f=1;
			for(int k=1;k<j;k++)
			{
	 			aa[k]==aa[j]?f=0:1;
			}
			}
			char a=n;
			cout<<"mima["<<i<<"].DECODE['"<<a<<"']='"<<j<<"';"<<endl;
			cout<<"mima["<<i<<"].ENCRYPTION['"<<j<<"']='"<<a<<"';"<<endl;
		}
		cout<<"////////////////////////////  "<<i<<endl;
	}
}
