///////////////////////////////////////////////////////////////////
//作者：小胖同学												 //
//文件名：用户信息.cpp	   										 //
//	ofstream out("用户信息.txt");								 // 
//		ifstream in("用户信息.txt");							 //
//																 //
//																 //
///////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
	int n,aa[10010]; char name[10001]; char nn[1001][101];
	ifstream in("data\\用户信息.txt");			
	in>>n;	
	cout<<"请输入应户名(最长10个字符 只能用字母数字和符号，不能用空格)： ";  cin>>name;
	for(int i=1;i<=n;i++)
		in>>nn[i]>>aa[i];	
	in.close();
	ofstream out("data\\用户信息.txt"); 
	out<<n+1<<endl;	
	for(int i=1;i<=n;i++)
		out<<nn[i]<<" "<<aa[i]<<endl;	out<<name<<" "<<n+1;	
	out.close();
	system("cls");
	for(int i=1;i<=4;i++)
	{
		cout<<"L";Sleep(70);
		cout<<"o";Sleep(50);
		cout<<"u";Sleep(100);
		cout<<"d";Sleep(70);
		cout<<"i";Sleep(80);
		cout<<"n";Sleep(50);
		cout<<"g";Sleep(70);
		cout<<".";Sleep(70);
		cout<<".";Sleep(70);
		cout<<".";Sleep(70);
		system("cls");
	} 
	cout<<"请记住您的账户密码为"<<n+1<<"按任意键继续";
	while(!kbhit()) 1;
	cout<<"注册成功，正在返回开始界面。";Sleep(800);	system("cls");
	system("私人小助手.exe");
	return 0;
} 
