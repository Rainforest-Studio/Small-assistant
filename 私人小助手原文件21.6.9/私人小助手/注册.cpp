///////////////////////////////////////////////////////////////////
//���ߣ�С��ͬѧ												 //
//�ļ������û���Ϣ.cpp	   										 //
//	ofstream out("�û���Ϣ.txt");								 // 
//		ifstream in("�û���Ϣ.txt");							 //
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
	ifstream in("data\\�û���Ϣ.txt");			
	in>>n;	
	cout<<"������Ӧ����(�10���ַ� ֻ������ĸ���ֺͷ��ţ������ÿո�)�� ";  cin>>name;
	for(int i=1;i<=n;i++)
		in>>nn[i]>>aa[i];	
	in.close();
	ofstream out("data\\�û���Ϣ.txt"); 
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
	cout<<"���ס�����˻�����Ϊ"<<n+1<<"�����������";
	while(!kbhit()) 1;
	cout<<"ע��ɹ������ڷ��ؿ�ʼ���档";Sleep(800);	system("cls");
	system("˽��С����.exe");
	return 0;
} 
