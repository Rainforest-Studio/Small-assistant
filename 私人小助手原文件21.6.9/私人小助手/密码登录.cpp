///////////////////////////////////////////////////////////////////
//���ߣ�С�ͬѧ												 //
//�ļ������û���Ϣ.cpp	   										 //
//	ofstream out("�û���Ϣ.txt");								 // 
//		ifstream in("�û���Ϣ.txt");							 //
//		data\\����״̬.txt										 //
//																 //
///////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
	ifstream in("data\\�û���Ϣ.txt");	
	int n,aa[10010]; char name[10001]; char nn[1001][101],na[1001];	int f=0,a,bb;
	cout<<"������Ӧ����";
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
	ofstream out("data\\����״̬.txt");
	if(f==1)
	{	
	cout<<"�û����ܲ�����";Sleep(700);
	out<<0;
	system("cls");
	 	system("˽��С����.exe");
	 		return 0;
	} 
	
	cout<<"��¼�ɹ�";
	out<<a<<"  "<<na;
	Sleep(700); system("cls");		
	out.close();
	system("˽��С����.exe");
	return 0;
} 
