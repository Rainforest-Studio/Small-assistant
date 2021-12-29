#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
using namespace std;
void SlowDisplay(char *);
void SlowDisplay(char *p)
     {
         while(1)
         {
             if(*p!=0)
                cout<<*p++;
             else 
                break;
             Sleep(10);
         }
     }
void Display(char *p)
     {
         while(1)
         {
             if(*p!=0)
                cout<<*p++;
             else 
                break;
             Sleep(50);
         }
     }
char len,n;
int main()
{
	SlowDisplay("当前版本号 V:21.6.15");
	cout<<endl;
	Sleep(100);
	SlowDisplay("programmer:德不孤必有邻、小臧同学");
	cout<<endl;
	Sleep(100);
	SlowDisplay("出品:Rainforest studio(德不孤必有邻、小臧同学)");
	cout<<endl<<endl<<endl; 
	Sleep(100);
	cout<<"已解锁(快捷登录)";
	cout<<endl<<endl;
	cout<<"1.打开网页 2.计算机 3.敬请期待";
	cout<<endl<<endl<<"         ";
	cout<<"您是暂时登陆，未输入密码，为保护主人隐私，暂时只开放几个应用。";
	cout<<endl<<endl;
	int s1;
	cin>>s1; 
	if(s1==1)
	{
		int m; 
		cout<<"选择：1，百度   2，openjudge  3，洛谷  4，云盾  5，c++那网站  6，小恐龙  7，优酷  8，可达鸭编程官网 9，NOIP官网 10，天气 11，敬请期待";
		cout<<endl;
		cin>>m;
		system("cls");
		if(m==1)
		{
			SlowDisplay("正在为您打开百度");
			Sleep(1000);
			system("start https://www.baidu.com");
			return 0;
		}	 
		if(m==2)
		{
			SlowDisplay("正在为您打开openjudge");
			Sleep(1000);
			system("start http://noi.openjudge.cn");
			return 0;
		} 
		if(m==3)
		{
			SlowDisplay("正在为您打开洛谷");
			Sleep(1000);
			system("start https://www.luogu.com.cn");
			return 0;
		} 
		if(m==4)
		{
			SlowDisplay("正在为您打开云盾");
			Sleep(1000);
			system("start https://www.yundun.com");
			return 0;
		} 
		if(m==5)
		{
			SlowDisplay("正在为您打开c++那网站");
			Sleep(1000);
			system("start http://ybt.ssoier.cn:8088/index.php");
			return 0;
		} 
		if(m==6)
		{
			SlowDisplay("正在为您打开小恐龙");
			Sleep(1000);
			system("start chrome://dino/");
			return 0;
		} 
		if(m==7)
		{
			SlowDisplay("正在为您打开优酷");
			Sleep(1000);
			system("start https://www.youku.com");
			return 0;
		} 
		if(m==8)
		{
			SlowDisplay("正在为您打开可达鸭编程官网");
			Sleep(1000);
			system("start https://www.coduck.cn");
			return 0;
		}
		if(m==9)
		{
			SlowDisplay("正在为您打开NOIP官网");
			Sleep(1000);
			system("start https://www.noi.cn");
			return 0;
		} 
		if(m==10)
		{
			SlowDisplay("正在为您打开天气");
			Sleep(1000);
			system("start https://www.windy.com");
			return 0;
		} 
		if(m==11)
		{
			cout<<endl<<endl<<endl<<endl;
			SlowDisplay("敬请期待"); 
			Sleep(5000);system("私人小助手1.exe");
			return 0;
		} 
	}
	if(s1==2)
	{
		long double num1,num2;
		char op;
		cout<<endl;
		SlowDisplay("雨林制作");
		cout<<endl<<"请输出两数（例：1+2）："<<endl;
		Sleep(100);
		SlowDisplay("技术限制，无法进行除法高精度运算(可以运算'+' '-' '*' '/' 乘方");
		cin>>num1>>op>>num2;
		switch(op)
		{
			case'+':cout<<num1+num2;break;
			case'-':cout<<num1-num2;break;
			case'*':cout<<num1*num2;break;
			case'/':cout<<num1/num2;break;
			case'^':long double ni=pow(num1,num2); cout<<ni; 
		}
		Sleep(1000);
		return 0;
	}
	if(s1==3)
	{
		cout<<endl<<endl;
		SlowDisplay("敬请期待");
		Sleep(1000);
		return 0;
	}
}
