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
/*定义播放一节音符的函数f--表示音符，其值为上述定义的枚举型a--	表示音高，其值为1(低音)、2(中音)、3(高音)*/
void Play(int f,int a,int t)
{
	int i = 0;
	Beep((unsigned )(f*a),t*PER);
}
/*定义休止函*/
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
	ifstream in("data\\在线状态.txt");	
	int iinline;
	in>>iinline;
	cout<<iinline; 
	in.close(); 
	system("cls");
	if(iinline==0) 
	{
	SlowDisplay("当前版本号 V:21.6.15");
	cout<<endl;
	Sleep(100);
	SlowDisplay("programmer:德不孤必有邻、小臧同学");
	cout<<endl;
	Sleep(100);
	SlowDisplay("出品:Rainforest studio(德不孤必有邻、小臧同学)");
	cout<<endl<<endl; 
	SlowDisplay("			开发人秘密小屋请输入2");  
	cout<<endl; 
	cout<<endl<<endl; 
	SlowDisplay("Secret spoon is(秘匙):");  
	cin>>input;
		if(0 == strcmp(input, "3"))   {system("在线状态");system("私人小助手1.exe");       return 0; }
				if(0 == strcmp(input, "4"))   {system("注册");system("私人小助手1.exe");       return 0; }
			if(0 == strcmp(input, "2"))
	{
		system("cls");
		system("color 0B");
		Display("欢迎进入开发人的秘密小屋，这里肯定有你想要的，虽然我们的编程水平有限，但我们会尽可能满足你的要求。");
		cout<<endl;
		Display("What do you want to do(你想干什吗)");
		cout<<endl; 
		printf(
		"---------------------\n"
		"|     1,提意见      |\n"
		"|     2,开发日志    |\n"
		"|     3,打赏        |\n"
		"---------------------\n" 
		);
        system(" 开发人秘密小屋.exe");
        return 0; 
	}
 	else
 	{
 		if(0 == strcmp(input, "小臧同学")||0 == strcmp(input, "xztx")||0 == strcmp(input, "小胖同学")||0 == strcmp(input, "雨林")||0 == strcmp(input, "yulin")||0 == strcmp(input, "雨霖")	) iinline==1; else
 		{system("color 02");
 		system("cls");
 		SlowDisplay("你不是主人");
		Sleep(1000);
		system("cls");
		system("私人小助手1.exe");
		return 0;
 		}
 		
 	}
			}
	if(iinline==1||0 == strcmp(input, "小臧同学")||0 == strcmp(input, "xztx")||0 == strcmp(input, "小胖同学")||0 == strcmp(input, "雨林")||0 == strcmp(input, "yulin")||0 == strcmp(input, "雨霖"))
 	{
 		system("cls");
 			SlowDisplay("已解锁");
			cout<<endl;
			SlowDisplay("主人，有什么可以帮您的。"); 
 			SlowDisplay("我可以打开应用、关机、打开网页、小游戏，别的功能以后会出现。");
			cout<<endl;
 			SlowDisplay("您要什么服务；1，打开应用 2，关机 3，打开网页 4，小游戏 5，计算机 6，音乐小屋 7，退出登录 8，敬请期待"); 
			int b;
			cin>>b; 
			system("cls");
			
			if(b==1)
			{
				cout<<"暂时还未开放";
				Sleep(1000);system("私人小助手1.exe");
				return 0;
			} 
			if(b==2)
			{
				system("title C语言关机程序");//设置cmd窗口宽度
    			system("mode con cols=48 lines=25");//窗口宽度高度
	    		system("color 1f");//设置默认控制台前景个背景色
    			system("date /T");
    			system("TIME /T");
	    		char cmd[20] = "shutdown -s -t";
    			char t[5] = "0";
				SlowDisplay("选择：1，实现在十分钟内的定时关闭计算机 2，立即关闭计算机 3.注销计算机 4.退出系统");
    			int c;
	    		scanf("%d", &c);
	    		getchar();
	    		switch (c)
    			{	
    				case 1:
    				    SlowDisplay("您想在多少秒后自动关闭计算机？（0~600）\n");
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
			if(b==4)
			{
				int c;
				SlowDisplay("嘿哈，游戏时间。");
				cout<<endl;
				SlowDisplay("1.勇者游戏 2.贪吃蛇 3.敬请期待");
				int b1;
				cin>>b1;
				if(b1==1)
				{
					system("勇者游戏1.exe");
				}
				if(b1==2)
				{
					system("贪吃蛇.exe");
				}
				if(b1==3)
				{
					cout<<endl<<endl<<endl<<endl;
					SlowDisplay("敬请期待"); 
					Sleep(5000);
					return 0;	
				} 
				Sleep(1000);system("私人小助手1.exe");
				return 0;
			}
 			if(b==5)
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
				Sleep(1000);system("私人小助手1.exe");
				return 0;
			}
			if(b==6)
			{
				SlowDisplay("欢迎来到音乐小屋，这里有您喜欢的曲子，快来听听吧");
				cout<<endl<<endl;
				Sleep(1000); 
				SlowDisplay("1.贝多芬名曲《欢乐颂》2.敬请期待") ;
				int y;
				cin>>y;
				if(y==1)
				{
					int ss=2;
					while(ss--)
					{
						/*欢乐颂，第一段*/
						/*第一节:3 3 4 5*/
						Play(Mi,2,2); Play(Mi,2,2); Play(Fa,2,2); Play(So,2,2);
						/*第二节:5 4 3 2*/
						Play(So,2,2); Play(Fa,2,2); Play(Mi,2,2); Play(Re,2,2);
						/*第三节:1 1 2 3*/
						Play(Do,2,2); Play(Do,2,2); Play(Re,2,2); Play(Mi,2,2);
						/*第四节:3 2 2 -*/
						Play(Mi,2,2); Play(Re,2,2); Play(Re,2,4); 
						/*欢乐颂第二段*/
						/*第一节:3 3 4 5*/
						Play(Mi,2,2); Play(Mi,2,2); Play(Fa,2,2); Play(So,2,2);
						/*第二节:5 4 3 2*/
						Play(So,2,2); Play(Fa,2,2); Play(Mi,2,2); Play(Re,2,2);
						/*第三节:1 1 2 3*/
						Play(Do,2,2); Play(Do,2,2); Play(Re,2,2); Play(Mi,2,2);
						/*第四节:2 1 1 -*/
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
				cout<<"已播放完毕";
				Sleep(10000);system("私人小助手1.exe");
				return 0;
				}
				if(y==2)
				{
					cout<<endl<<endl;
					SlowDisplay("敬请期待");
					Sleep(1000);system("私人小助手1.exe");
					return 0;
				}	
			}
			if(b==7)
			{
				ifstream in("data\\用户信息.txt");
				int iiinline;
				in>>iiinline;	in.close();
				ofstream out("data\\在线状态.txt");
				out<<0; out.close();system("cls"); Display("正在退出。。。");system("cls"); Display("正在退出。。。");system("cls");
				Sleep(1000);		
				system("私人小助手1.exe");
			}
			if(b==8)
			{
				cout<<endl<<endl;
				SlowDisplay("敬请期待");
				Sleep(1000);system("私人小助手1.exe");
				return 0;
			}
		}
	}

