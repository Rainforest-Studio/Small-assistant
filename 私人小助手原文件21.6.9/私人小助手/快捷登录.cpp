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
	SlowDisplay("��ǰ�汾�� V:21.6.15");
	cout<<endl;
	Sleep(100);
	SlowDisplay("programmer:�²��±����ڡ�С�ͬѧ");
	cout<<endl;
	Sleep(100);
	SlowDisplay("��Ʒ:Rainforest studio(�²��±����ڡ�С�ͬѧ)");
	cout<<endl<<endl<<endl; 
	Sleep(100);
	cout<<"�ѽ���(��ݵ�¼)";
	cout<<endl<<endl;
	cout<<"1.����ҳ 2.����� 3.�����ڴ�";
	cout<<endl<<endl<<"         ";
	cout<<"������ʱ��½��δ�������룬Ϊ����������˽����ʱֻ���ż���Ӧ�á�";
	cout<<endl<<endl;
	int s1;
	cin>>s1; 
	if(s1==1)
	{
		int m; 
		cout<<"ѡ��1���ٶ�   2��openjudge  3�����  4���ƶ�  5��c++����վ  6��С����  7���ſ�  8���ɴ�Ѽ��̹��� 9��NOIP���� 10������ 11�������ڴ�";
		cout<<endl;
		cin>>m;
		system("cls");
		if(m==1)
		{
			SlowDisplay("����Ϊ���򿪰ٶ�");
			Sleep(1000);
			system("start https://www.baidu.com");
			return 0;
		}	 
		if(m==2)
		{
			SlowDisplay("����Ϊ����openjudge");
			Sleep(1000);
			system("start http://noi.openjudge.cn");
			return 0;
		} 
		if(m==3)
		{
			SlowDisplay("����Ϊ�������");
			Sleep(1000);
			system("start https://www.luogu.com.cn");
			return 0;
		} 
		if(m==4)
		{
			SlowDisplay("����Ϊ�����ƶ�");
			Sleep(1000);
			system("start https://www.yundun.com");
			return 0;
		} 
		if(m==5)
		{
			SlowDisplay("����Ϊ����c++����վ");
			Sleep(1000);
			system("start http://ybt.ssoier.cn:8088/index.php");
			return 0;
		} 
		if(m==6)
		{
			SlowDisplay("����Ϊ����С����");
			Sleep(1000);
			system("start chrome://dino/");
			return 0;
		} 
		if(m==7)
		{
			SlowDisplay("����Ϊ�����ſ�");
			Sleep(1000);
			system("start https://www.youku.com");
			return 0;
		} 
		if(m==8)
		{
			SlowDisplay("����Ϊ���򿪿ɴ�Ѽ��̹���");
			Sleep(1000);
			system("start https://www.coduck.cn");
			return 0;
		}
		if(m==9)
		{
			SlowDisplay("����Ϊ����NOIP����");
			Sleep(1000);
			system("start https://www.noi.cn");
			return 0;
		} 
		if(m==10)
		{
			SlowDisplay("����Ϊ��������");
			Sleep(1000);
			system("start https://www.windy.com");
			return 0;
		} 
		if(m==11)
		{
			cout<<endl<<endl<<endl<<endl;
			SlowDisplay("�����ڴ�"); 
			Sleep(5000);system("˽��С����1.exe");
			return 0;
		} 
	}
	if(s1==2)
	{
		long double num1,num2;
		char op;
		cout<<endl;
		SlowDisplay("��������");
		cout<<endl<<"���������������1+2����"<<endl;
		Sleep(100);
		SlowDisplay("�������ƣ��޷����г����߾�������(��������'+' '-' '*' '/' �˷�");
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
		SlowDisplay("�����ڴ�");
		Sleep(1000);
		return 0;
	}
}
