#include<graphics.h>
#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<map>
#include<time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int START=1;
int Random_number; //��?�������y
void game_over(int SUM)
{
	////////////////////////////////////////////////////////////////////
	IMAGE setting_img;
	loadimage(&setting_img,_T("��aʼ?��?����.png"),500,650);//�Ө���?��?����
	putimage(0,0,&setting_img);//��a��?��?����
	////////////////////////////////////////////////////////////////////��?��?��?����
	settextstyle(80,40,_T("��?��?"));
	switch(SUM){
		case 0:outtextxy(150,150,_T("0��?"));  outtextxy(140,260,_T("��?��? 0")); break;
		case 1:outtextxy(150,150,_T("20��?")); outtextxy(140,260,_T("��?��? 1")); break;
		case 2:outtextxy(150,150,_T("40��?")); outtextxy(140,260,_T("��?��? 2")); break;
		case 3:outtextxy(150,150,_T("60��?")); outtextxy(140,260,_T("��?��? 3")); break;
		case 4:outtextxy(150,150,_T("80��?")); outtextxy(140,260,_T("��?��? 4")); break;
		case 5:outtextxy(150,150,_T("100��?"));outtextxy(140,260,_T("��?��? 5")); break;
	}
	settextstyle(40,20,_T("��?��?"));
	outtextxy(170,450,_T("�٨�����?һ?��?"));
	int F=1;
	MOUSEMSG mouse;
	while(F){
		mouse=GetMouseMsg();
		switch(mouse.uMsg){
		case WM_LBUTTONDOWN:
			if(mouse.x > 170 && mouse.x < 250 && mouse.y > 450 && mouse.y <490)
			{
				F=0;
				cleardevice();
			}
		}
		Sleep(10);
	 }
}
void prSUM(int round,int SUM)
{
	settextstyle(20,10,_T("��?��?"));
	switch(round){
		case 1:outtextxy(80,50,_T("��̨?һ?��a")); break;
		case 2:outtextxy(80,50,_T("��̨?��t��a")); break;
		case 3:outtextxy(80,50,_T("��̨?���y��a")); break;
		case 4:outtextxy(80,50,_T("��̨?��?��a")); break;
		case 5:outtextxy(80,50,_T("��̨?��?��a")); break;
	}
	switch(SUM){
		case 0:outtextxy(150,50,_T("��?���y���o0")); break;
		case 1:outtextxy(150,50,_T("��?���y���o1")); break;
		case 2:outtextxy(150,50,_T("��?���y���o2")); break;
		case 3:outtextxy(150,50,_T("��?���y���o3")); break;
		case 4:outtextxy(150,50,_T("��?���y���o4")); break;
		case 5:outtextxy(150,50,_T("��?���y���o5")); break;
	}
}
void start()
{
	////////////////////////////////////////////////////////////////////
	IMAGE setting_img;
	loadimage(&setting_img,_T("��aʼ?��?����.png"),500,650);//�Ө���?��?����
	putimage(0,0,&setting_img);//��a��?��?����
	////////////////////////////////////////////////////////////////////��?��?��?����
	int SUM=0,round=0,N=5;
    while(N)
	{
		round++;
		prSUM(round,SUM);
	int Random_number; //��?�������y
	int Now;//��̡?ǰ�����y
	srand((unsigned)time(0));
	Now=Random_number=rand()%32; //����?�ɨ�0-31��D��?��?�������y   Random_number
	IMAGE Now_img;
	switch(Random_number){
	case 0: loadimage(&Now_img,_T("��?��?.png" ),300,300); break;
    case 1: loadimage(&Now_img,_T("����?��?.png" ),300,300); break;
    case 2: loadimage(&Now_img,_T("���꽨��.png" ),300,300); break;
    case 3: loadimage(&Now_img,_T("�ʨ��ਤ.png" ),300,300); break;
    case 4: loadimage(&Now_img,_T("��?��?.png" ),300,300); break;
    case 5: loadimage(&Now_img,_T("��?����.png" ),300,300); break;
    case 6: loadimage(&Now_img,_T("����Y.png" ),300,300); break;
    case 7: loadimage(&Now_img,_T("������?.png" ),300,300); break;
    case 8: loadimage(&Now_img,_T("�Ө�����?png" ),300,300); break;
    case 9: loadimage(&Now_img,_T("�Ө���?.png" ),300,300); break;
    case 10: loadimage(&Now_img,_T("�ڨ�����?��-.png" ),300,300); break;
    case 11: loadimage(&Now_img,_T("��t����?png" ),300,300); break;
    case 12: loadimage(&Now_img,_T("��t��?.png" ),300,300); break;
    case 13: loadimage(&Now_img,_T("��a��?.png" ),300,300); break;
    case 14: loadimage(&Now_img,_T("��-��?.png" ),300,300); break;
    case 15: loadimage(&Now_img,_T("��-����.png" ),300,300); break;
    case 16: loadimage(&Now_img,_T("�ɢ�?��t.png" ),300,300); break;
    case 17: loadimage(&Now_img,_T("�ڨ��ɨ���?��?��?��?.png" ),300,300); break;
    case 18: loadimage(&Now_img,_T("��t��?��?��?��?��?��?.png" ),300,300); break;
    case 19: loadimage(&Now_img,_T("�ਤ����.png" ),300,300); break;
    case 20: loadimage(&Now_img,_T("ɽ?��?.png" ),300,300); break;
    case 21: loadimage(&Now_img,_T("ɽ?����.png" ),300,300); break;
    case 22: loadimage(&Now_img,_T("��?����.png" ),300,300); break;
    case 23: loadimage(&Now_img,_T("��?����.png" ),300,300); break;
    case 24: loadimage(&Now_img,_T("��?���?png" ),300,300); break;
    case 25: loadimage(&Now_img,_T("̨��?��?.png" ),300,300); break;
    case 26: loadimage(&Now_img,_T("�쬨?��.png" ),300,300); break;
    case 27: loadimage(&Now_img,_T("���²�?��?��?��?.png" ),300,300); break;
    case 28: loadimage(&Now_img,_T("��?��?ά?�ᨢ��?��?��?��?.png" ),300,300); break;
    case 29: loadimage(&Now_img,_T("��?��?.png" ),300,300); break;
    case 30: loadimage(&Now_img,_T("��?��-.png" ),300,300); break;
    case 31: loadimage(&Now_img,_T("��?�쨬.png" ),300,300); break;
	}
	//////////////////////////////////////////////////////////////////////��?��?��̡?ǰ�� ʡ? 
	putimage(80,100,&Now_img); //��?��?��̡?ǰ�� ʡ?�ᨢ
	Random_number=rand()%4; //��?��������?�ɨ�0-3 ���?����?��yȷ��?���e��?λ?��?
	settextstyle(40,15,_T("��?��?"));
	int X=60;
	int vis[4];
	for(int i=0;i<=3;i++)
	{
		int f=1;
		int NOW; //��̡?ǰ����?������?��?
		NOW=rand()%32;
		if(Random_number==i) NOW=Now;	
		while(f)
		{
			f=0;
			for(int j=0;j<i;j++)
			{
				if(vis[j]==NOW||(Random_number!=j&&vis[j]==Now))
				{
				NOW=rand()%32;f=1;break;
				}
			}
		}
		vis[i]=NOW;
		switch(NOW){
	case 0: outtextxy(X,430,_T("��?��?" )); break;
    case 1: outtextxy(X,430,_T("����?��?" )); break;
    case 2: outtextxy(X,430,_T("���꽨��" )); break;
    case 3: outtextxy(X,430,_T("�ʨ��ਤ" )); break;
    case 4: outtextxy(X,430,_T("��?��?" )); break;
    case 5: outtextxy(X,430,_T("��?����" )); break;
    case 6: outtextxy(X,430,_T("����Y" )); break;
    case 7: outtextxy(X,430,_T("������?" )); break;
    case 8: outtextxy(X,430,_T("�Ө�����? )); break;
    case 9: outtextxy(X,430,_T("�Ө���?" )); break;
    case 10: outtextxy(X,430,_T("�ڨ�����?��-" )); break;
    case 11: outtextxy(X,430,_T("��t����? )); break;
    case 12: outtextxy(X,430,_T("��t��?" )); break;
    case 13: outtextxy(X,430,_T("��a��?" )); break;
    case 14: outtextxy(X,430,_T("��-��?" )); break;
    case 15: outtextxy(X,430,_T("��-����" )); break;
    case 16: outtextxy(X,430,_T("�ɢ�?��t" )); break;
    case 17: outtextxy(X,430,_T("�ڨ��ɨ���?" )); break;
    case 18: outtextxy(X,430,_T("��t��?" )); break;
    case 19: outtextxy(X,430,_T("�ਤ����" )); break;
    case 20: outtextxy(X,430,_T("ɽ?��?" )); break;
    case 21: outtextxy(X,430,_T("ɽ?����" )); break;
    case 22: outtextxy(X,430,_T("��?����" )); break;
    case 23: outtextxy(X,430,_T("��?����" )); break;
    case 24: outtextxy(X,430,_T("��?���? )); break;
    case 25: outtextxy(X,430,_T("̨��?��?" )); break;
    case 26: outtextxy(X,430,_T("�쬨?��" )); break;
    case 27: outtextxy(X,430,_T("���²�?" )); break;
    case 28: outtextxy(X,430,_T("��?��?" )); break;
    case 29: outtextxy(X,430,_T("��?��?" )); break;
    case 30: outtextxy(X,430,_T("��?��-" )); break;
    case 31: outtextxy(X,430,_T("��?�쨬" )); break;
	}
		X+=97;
	}
	//////////////////////////////////////////////////////////////////////��?��?ѡ?��? 
	IMAGE T_img,F_img,RE_img,YX=60+97*Random_number-60,YY=490;
	loadimage(&T_img,_T("��yȷ��?png"),50,50);
	loadimage(&F_img,_T("���?��.png"),50,50);
	loadimage(&RE_img,_T("��?���?png",),400,50);
	int F=1;//���?����?��?��?ѡ?��?
	MOUSEMSG mouse;
	 while(F){
		mouse=GetMouseMsg();
		switch(mouse.uMsg){
		case WM_LBUTTONDOWN:
			if(mouse.x > 60 && mouse.x < 120 && mouse.y > 430 && mouse.y <480)
			{
				putimage(70+97*Random_number,490,&T_img); Random_number==0?putimage(70,490,&T_img),SUM++:putimage(70,490,&F_img); F=0; Sleep(1000); break;
			}
			if(mouse.x > 157 && mouse.x < 217 && mouse.y > 430 && mouse.y <480)
			{
				putimage(70+97*Random_number,490,&T_img); Random_number==1?putimage(167,490,&T_img),SUM++:putimage(167,490,&F_img); F=0; Sleep(1000);break;
			}
			if(mouse.x > 254 && mouse.x < 314 && mouse.y > 430 && mouse.y <480)
			{
				putimage(70+97*Random_number,490,&T_img); Random_number==2?putimage(264,490,&T_img),SUM++:putimage(264,490,&F_img); F=0; Sleep(1000);break;
			}
			if(mouse.x > 351 && mouse.x < 411 && mouse.y > 430 && mouse.y <480)
			{
				putimage(70+97*Random_number,490,&T_img); Random_number==3?putimage(361,490,&T_img),SUM++:putimage(361,490,&F_img); F=0; Sleep(1000);break;
			}
		}
		Sleep(10);
	 }
	 ////////////////////////////////////////////////////////////////////�쨬�騦��?��?ѡ?��?���e��?
	 putimage(60,490,&RE_img);
	 putimage(60,430,&RE_img);
	 N--;
	 }
	 prSUM(round,SUM);Sleep(1000);game_over(SUM);
}
int main(void){

	while(START)
	{
	////////////////////////////////////////////////////////////////////
	initgraph(500,650);//��?��?��-��?
	IMAGE cover_img;
	loadimage(&cover_img,_T("A��a��?.png"),500,650);//�Ө���?��a��?
	putimage(0,0,&cover_img);//��?��?��a��?
	////////////////////////////////////////////////////////////////////��?��?��a��?
	MOUSEMSG mouse;
	int F=1;
	 while(F){
		mouse=GetMouseMsg();
		switch(mouse.uMsg){
		case WM_LBUTTONDOWN:
			if(mouse.x > 340 && mouse.x < 430 && mouse.y > 290 && mouse.y <340)//340 290 430 340
			{
				//prepare();
				start();
				F=0;
			}
		}
		Sleep(10);
	 }
	 ////////////////////////////////////////////////////////////////////�쨬��a��?��?��aʼ?
	}
    system("pause");
}

