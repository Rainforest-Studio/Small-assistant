#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
using namespace std;
const unsigned PER = 225;
struct Place
{
    int bar,hotel,forest1,forest2,forest3,grass1,grass2,grass3;
}place={1,2,3,4,5,6,7,8};
enum {Do = 262,Re = 294,Mi = 330,Fa = 349,So = 392,La = 440,Xi = 494};
/*���岥��һ�������ĺ���f--��ʾ��������ֵΪ���������ö����a--	��ʾ���ߣ���ֵΪ1(����)��2(����)��3(����)*/
void Play(int f,int a,int t)
{
	int i = 0;
	Beep((unsigned )(f*a),t*PER);
}
/*������ֹ��*/
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

	char input[10] = { 0 };
	system("color 1f");
	ifstream in("data\\����״̬.txt");	
	int iinline;
	in>>iinline;
	cout<<iinline; 
	in.close(); 
	system("cls");
	if(iinline==0) 
	{
	SlowDisplay("��ǰ�汾�� V:21.6.15");
	cout<<endl;
	Sleep(100);
	SlowDisplay("programmer:�²��±����ڡ�С�ͬѧ");
	cout<<endl;
	Sleep(100);
	SlowDisplay("��Ʒ:Rainforest studio(�²��±����ڡ�С�ͬѧ)");
	cout<<endl<<endl; 
	SlowDisplay("			����������С��������2");  
	cout<<endl; 
	cout<<endl<<endl; 
	SlowDisplay("Secret spoon is(�س�):");  
	cin>>input;
		if(0 == strcmp(input, "3"))   {system("����״̬");system("˽��С����1.exe");       return 0; }
				if(0 == strcmp(input, "4"))   {system("ע��");system("˽��С����1.exe");       return 0; }
			if(0 == strcmp(input, "2"))
	{
		system("cls");
		system("color 0B");
		Display("��ӭ���뿪���˵�����С�ݣ�����϶�������Ҫ�ģ���Ȼ���ǵı��ˮƽ���ޣ������ǻᾡ�����������Ҫ��");
		cout<<endl;
		Display("What do you want to do(�����ʲ��)");
		cout<<endl; 
		printf(
		"---------------------\n"
		"|     1,�����      |\n"
		"|     2,������־    |\n"
		"|     3,����        |\n"
		"---------------------\n" 
		);
        system(" ����������С��.exe");
        return 0; 
	}
 	else
 	{
 		if(0 == strcmp(input, "С�ͬѧ")||0 == strcmp(input, "xztx")||0 == strcmp(input, "С��ͬѧ")||0 == strcmp(input, "����")||0 == strcmp(input, "yulin")||0 == strcmp(input, "����")	) iinline==1; else
 		{system("color 02");
 		system("cls");
 		SlowDisplay("�㲻������");
		Sleep(1000);
		system("cls");
		system("˽��С����1.exe");
		return 0;
 		}
 		
 	}
			}
	if(iinline==1||0 == strcmp(input, "С�ͬѧ")||0 == strcmp(input, "xztx")||0 == strcmp(input, "С��ͬѧ")||0 == strcmp(input, "����")||0 == strcmp(input, "yulin")||0 == strcmp(input, "����"))
 	{
 		system("cls");
 			SlowDisplay("�ѽ���");
			cout<<endl;
			SlowDisplay("���ˣ���ʲô���԰����ġ�"); 
 			SlowDisplay("�ҿ��Դ�Ӧ�á��ػ�������ҳ��С��Ϸ����Ĺ����Ժ����֡�");
			cout<<endl;
 			SlowDisplay("��Ҫʲô����1����Ӧ�� 2���ػ� 3������ҳ 4��С��Ϸ 5������� 6������С�� 7���˳���¼ 8�������ڴ�"); 
			int b;
			cin>>b; 
			system("cls");
			
			if(b==1)
			{
				cout<<"��ʱ��δ����";
				Sleep(1000);system("˽��С����1.exe");
				return 0;
			} 
			if(b==2)
			{
				system("title C���Թػ�����");//����cmd���ڿ��
    			system("mode con cols=48 lines=25");//���ڿ�ȸ߶�
	    		system("color 1f");//����Ĭ�Ͽ���̨ǰ��������ɫ
    			system("date /T");
    			system("TIME /T");
	    		char cmd[20] = "shutdown -s -t";
    			char t[5] = "0";
				SlowDisplay("ѡ��1��ʵ����ʮ�����ڵĶ�ʱ�رռ���� 2�������رռ���� 3.ע������� 4.�˳�ϵͳ");
    			int c;
	    		scanf("%d", &c);
	    		getchar();
	    		switch (c)
    			{	
    				case 1:
    				    SlowDisplay("�����ڶ�������Զ��رռ��������0~600��\n");
    	    			scanf("%s", t);
    	    			system(strcat(cmd, t));
        				break;
    				case 2:
        				system("shutdown -p");
        				break;
    				case 3:
    	    			system("shutdown -1");
    	    			break;
    				case 0:
    				    break;
    					default:
    				    printf("Error!\n");
    			}		
    			system("pause");
    			exit(0);

  			} 
			if(b==3)
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
			if(b==4)
			{
				int c;
				SlowDisplay("�ٹ�����Ϸʱ�䡣");
				cout<<endl;
				SlowDisplay("1.������Ϸ 2.̰���� 3.�����ڴ�");
				int b1;
				cin>>b1;
				if(b1==1)
				{
					system("������Ϸ1.exe");
				}
				if(b1==2)
				{
					system("̰����.exe");
				}
				if(b1==3)
				{
					cout<<endl<<endl<<endl<<endl;
					SlowDisplay("�����ڴ�"); 
					Sleep(5000);
					return 0;	
				} 
				Sleep(1000);system("˽��С����1.exe");
				return 0;
			}
 			if(b==5)
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
				Sleep(1000);system("˽��С����1.exe");
				return 0;
			}
			if(b==6)
			{
				SlowDisplay("��ӭ��������С�ݣ���������ϲ�������ӣ�����������");
				cout<<endl<<endl;
				Sleep(1000); 
				SlowDisplay("1.����������������̡�2.�����ڴ�") ;
				int y;
				cin>>y;
				if(y==1)
				{
					int ss=2;
					while(ss--)
					{
						/*�����̣���һ��*/
						/*��һ��:3 3 4 5*/
						Play(Mi,2,2); Play(Mi,2,2); Play(Fa,2,2); Play(So,2,2);
						/*�ڶ���:5 4 3 2*/
						Play(So,2,2); Play(Fa,2,2); Play(Mi,2,2); Play(Re,2,2);
						/*������:1 1 2 3*/
						Play(Do,2,2); Play(Do,2,2); Play(Re,2,2); Play(Mi,2,2);
						/*���Ľ�:3 2 2 -*/
						Play(Mi,2,2); Play(Re,2,2); Play(Re,2,4); 
						/*�����̵ڶ���*/
						/*��һ��:3 3 4 5*/
						Play(Mi,2,2); Play(Mi,2,2); Play(Fa,2,2); Play(So,2,2);
						/*�ڶ���:5 4 3 2*/
						Play(So,2,2); Play(Fa,2,2); Play(Mi,2,2); Play(Re,2,2);
						/*������:1 1 2 3*/
						Play(Do,2,2); Play(Do,2,2); Play(Re,2,2); Play(Mi,2,2);
						/*���Ľ�:2 1 1 -*/
						Play(Re,2,2); Play(Do,2,2); Play(Do,2,2); 
					}	
					printf(
					"Joy, bright spark of divinity,\n"
					"Daughter of Elysium,\n"
					"Fire-inspired we tread/n"
					"Thy sanctuary.\n"
					"Thy magic power re-unites\n"
					"All that custom has divided,\n"
					"All men become brothers\n"
					"Under the sway of thy gentle wings.\n"
					"Whoever has created\n"
					"An abiding friendship,\n"
					"Or has won\n"
					"A true and loving wife,\n"
					"All who can call at least one soul theirs,\n"
					"Join in our song of praise ;\n"
					"But any who cannot must creep tearfully\n"
					"Away from our circle.\n"
					"All creatures drink of joy\n"
					"At nature's breast.\n"
					"Just and unjust\n"
					"Alike taste of her gift ;\n"
					"She gave us kisses and the fruit of the vine,\n"
					"A tried friend to the end.\n"
					"Even the worm can fell contentment,\n" 
					"And the cherub stands before God !\n"
					"Gladly, like the heavenly bodies\n"
					"Which He set on their courses\n"
					"Through the splendour of the firmament ;\n"
					"Thus, brothers, you should run your race,\n"
					"As a hero going to conquest.\n"
					"You millions, I embrace you.\n"
					"This kiss is for all the world !\n"
					"Brothers, above the starry canopy\n"
					"must dwell a loving Father.\n"
					"Do you fall in worship, you millions ?\n"
					"World, do you know your Creator ?\n"
					"Seek Him in the heavens !\n"
					"Above the stars must He dwell.\n"
				);
				cout<<endl;
				cout<<"�Ѳ������";
				Sleep(10000);system("˽��С����1.exe");
				return 0;
				}
				if(y==2)
				{
					cout<<endl<<endl;
					SlowDisplay("�����ڴ�");
					Sleep(1000);system("˽��С����1.exe");
					return 0;
				}	
			}
			if(b==7)
			{
				ifstream in("data\\�û���Ϣ.txt");
				int iiinline;
				in>>iiinline;	in.close();
				ofstream out("data\\����״̬.txt");
				out<<0; out.close();system("cls"); Display("�����˳�������");system("cls"); Display("�����˳�������");system("cls");
				Sleep(1000);		
				system("˽��С����1.exe");
			}
			if(b==8)
			{
				cout<<endl<<endl;
				SlowDisplay("�����ڴ�");
				Sleep(1000);system("˽��С����1.exe");
				return 0;
			}
		}
	}

