///////////////////////////////////////////////////////////////////
//作者：小臧同学												 //
//文件名：用户信息.cpp	   										 //
//	ofstream out("用户信息.txt");								 // 
//		ifstream in("用户信息.txt");							 //
//		data\\在线状态.txt										 //
//																 //
///////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
	ifstream in("data\\用户信息.txt");	
	int n,aa[10010]; char name[10001]; char nn[1001][101],na[1001];	int f=0,a,bb;
	cout<<"请输入应户名";
	cin>>name;
	int ln=strlen(name);
	in>>n;
	f=1;
	for(int i=1;i<=n;i++) 
	{
		f=0;
		in>>nn[i];
		in>>aa[i];
		if(ln==strlen(nn[i]))
		{
		//	cout<<1;
			for(int ii=0;ii<ln;ii++)
			{
				if(name[ii]!=nn[i][ii]) f=1;
			}
			if(f==0)
			{a=aa[i];for(int j=0;j<=ln;j++) na[j]=nn[i][j];break;}
		}
	}	
	in.close();
	ofstream out("data\\在线状态.txt");
	if(f==1)
	{	
	cout<<"用户可能不存在";Sleep(700);
	out<<0;
	system("cls");
	 	system("私人小助手.exe");
	 		return 0;
	} 
	
	cout<<"登录成功";
	out<<a<<"  "<<na;
	Sleep(700); system("cls");		
	out.close();
	system("私人小助手.exe");
	return 0;
} 
