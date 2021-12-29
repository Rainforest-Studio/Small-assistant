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
int Random_number; //随?机ú数簓
void game_over(int SUM)
{
	////////////////////////////////////////////////////////////////////
	IMAGE setting_img;
	loadimage(&setting_img,_T("开a始?背?景°.png"),500,650);//加ó载?背?景°
	putimage(0,0,&setting_img);//封面?背?景°
	////////////////////////////////////////////////////////////////////绘?制?背?景°
	settextstyle(80,40,_T("宋?体?"));
	switch(SUM){
		case 0:outtextxy(150,150,_T("0分?"));  outtextxy(140,260,_T("得?分? 0")); break;
		case 1:outtextxy(150,150,_T("20分?")); outtextxy(140,260,_T("得?分? 1")); break;
		case 2:outtextxy(150,150,_T("40分?")); outtextxy(140,260,_T("得?分? 2")); break;
		case 3:outtextxy(150,150,_T("60分?")); outtextxy(140,260,_T("得?分? 3")); break;
		case 4:outtextxy(150,150,_T("80分?")); outtextxy(140,260,_T("得?分? 4")); break;
		case 5:outtextxy(150,150,_T("100分?"));outtextxy(140,260,_T("得?分? 5")); break;
	}
	settextstyle(40,20,_T("宋?体?"));
	outtextxy(170,450,_T("再ù来ぁ?一?次?"));
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
	settextstyle(20,10,_T("宋?体?"));
	switch(round){
		case 1:outtextxy(80,50,_T("第台?一?题琣")); break;
		case 2:outtextxy(80,50,_T("第台?二t题琣")); break;
		case 3:outtextxy(80,50,_T("第台?三▂题琣")); break;
		case 4:outtextxy(80,50,_T("第台?四?题琣")); break;
		case 5:outtextxy(80,50,_T("第台?五?题琣")); break;
	}
	switch(SUM){
		case 0:outtextxy(150,50,_T("分?数簓：阰0")); break;
		case 1:outtextxy(150,50,_T("分?数簓：阰1")); break;
		case 2:outtextxy(150,50,_T("分?数簓：阰2")); break;
		case 3:outtextxy(150,50,_T("分?数簓：阰3")); break;
		case 4:outtextxy(150,50,_T("分?数簓：阰4")); break;
		case 5:outtextxy(150,50,_T("分?数簓：阰5")); break;
	}
}
void start()
{
	////////////////////////////////////////////////////////////////////
	IMAGE setting_img;
	loadimage(&setting_img,_T("开a始?背?景°.png"),500,650);//加ó载?背?景°
	putimage(0,0,&setting_img);//封面?背?景°
	////////////////////////////////////////////////////////////////////绘?制?背?景°
	int SUM=0,round=0,N=5;
    while(N)
	{
		round++;
		prSUM(round,SUM);
	int Random_number; //随?机ú数簓
	int Now;//当獭?前°数簓
	srand((unsigned)time(0));
	Now=Random_number=rand()%32; //生Θ?成é0-31中D的?随?机ú数簓   Random_number
	IMAGE Now_img;
	switch(Random_number){
	case 0: loadimage(&Now_img,_T("安?徽?.png" ),300,300); break;
    case 1: loadimage(&Now_img,_T("北馈?京?.png" ),300,300); break;
    case 2: loadimage(&Now_img,_T("福￡建¨.png" ),300,300); break;
    case 3: loadimage(&Now_img,_T("甘ê肃à.png" ),300,300); break;
    case 4: loadimage(&Now_img,_T("广?东?.png" ),300,300); break;
    case 5: loadimage(&Now_img,_T("广?西÷.png" ),300,300); break;
    case 6: loadimage(&Now_img,_T("贵ó州Y.png" ),300,300); break;
    case 7: loadimage(&Now_img,_T("海￡南?.png" ),300,300); break;
    case 8: loadimage(&Now_img,_T("河ó北馈?png" ),300,300); break;
    case 9: loadimage(&Now_img,_T("河ó南?.png" ),300,300); break;
    case 10: loadimage(&Now_img,_T("黑ú龙ⅷ?江-.png" ),300,300); break;
    case 11: loadimage(&Now_img,_T("湖t北馈?png" ),300,300); break;
    case 12: loadimage(&Now_img,_T("湖t南?.png" ),300,300); break;
    case 13: loadimage(&Now_img,_T("吉a林?.png" ),300,300); break;
    case 14: loadimage(&Now_img,_T("江-苏?.png" ),300,300); break;
    case 15: loadimage(&Now_img,_T("江-西÷.png" ),300,300); break;
    case 16: loadimage(&Now_img,_T("辽ⅷ?宁t.png" ),300,300); break;
    case 17: loadimage(&Now_img,_T("内ú蒙é古?自?治?区?.png" ),300,300); break;
    case 18: loadimage(&Now_img,_T("宁t夏?回?族?自?治?区?.png" ),300,300); break;
    case 19: loadimage(&Now_img,_T("青à海￡.png" ),300,300); break;
    case 20: loadimage(&Now_img,_T("山?东?.png" ),300,300); break;
    case 21: loadimage(&Now_img,_T("山?西÷.png" ),300,300); break;
    case 22: loadimage(&Now_img,_T("陕?西÷.png" ),300,300); break;
    case 23: loadimage(&Now_img,_T("上?海￡.png" ),300,300); break;
    case 24: loadimage(&Now_img,_T("四?川洹?png" ),300,300); break;
    case 25: loadimage(&Now_img,_T("台?湾?.png" ),300,300); break;
    case 26: loadimage(&Now_img,_T("天?津ò.png" ),300,300); break;
    case 27: loadimage(&Now_img,_T("西÷藏?自?治?区?.png" ),300,300); break;
    case 28: loadimage(&Now_img,_T("新?疆?维?吾á尔?自?治?区?.png" ),300,300); break;
    case 29: loadimage(&Now_img,_T("云?南?.png" ),300,300); break;
    case 30: loadimage(&Now_img,_T("浙?江-.png" ),300,300); break;
    case 31: loadimage(&Now_img,_T("重?庆ì.png" ),300,300); break;
	}
	//////////////////////////////////////////////////////////////////////绘?制?当獭?前° 省? 
	putimage(80,100,&Now_img); //绘?制?当獭?前° 省?会á
	Random_number=rand()%4; //随?机ú生Θ?成é0-3 代洙?表括?正y确ā?答鋏案?位?置?
	settextstyle(40,15,_T("宋?体?"));
	int X=60;
	int vis[4];
	for(int i=0;i<=3;i++)
	{
		int f=1;
		int NOW; //当獭?前°随?机ú地?区?
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
	case 0: outtextxy(X,430,_T("安?徽?" )); break;
    case 1: outtextxy(X,430,_T("北馈?京?" )); break;
    case 2: outtextxy(X,430,_T("福￡建¨" )); break;
    case 3: outtextxy(X,430,_T("甘ê肃à" )); break;
    case 4: outtextxy(X,430,_T("广?东?" )); break;
    case 5: outtextxy(X,430,_T("广?西÷" )); break;
    case 6: outtextxy(X,430,_T("贵ó州Y" )); break;
    case 7: outtextxy(X,430,_T("海￡南?" )); break;
    case 8: outtextxy(X,430,_T("河ó北馈? )); break;
    case 9: outtextxy(X,430,_T("河ó南?" )); break;
    case 10: outtextxy(X,430,_T("黑ú龙ⅷ?江-" )); break;
    case 11: outtextxy(X,430,_T("湖t北馈? )); break;
    case 12: outtextxy(X,430,_T("湖t南?" )); break;
    case 13: outtextxy(X,430,_T("吉a林?" )); break;
    case 14: outtextxy(X,430,_T("江-苏?" )); break;
    case 15: outtextxy(X,430,_T("江-西÷" )); break;
    case 16: outtextxy(X,430,_T("辽ⅷ?宁t" )); break;
    case 17: outtextxy(X,430,_T("内ú蒙é古?" )); break;
    case 18: outtextxy(X,430,_T("宁t夏?" )); break;
    case 19: outtextxy(X,430,_T("青à海￡" )); break;
    case 20: outtextxy(X,430,_T("山?东?" )); break;
    case 21: outtextxy(X,430,_T("山?西÷" )); break;
    case 22: outtextxy(X,430,_T("陕?西÷" )); break;
    case 23: outtextxy(X,430,_T("上?海￡" )); break;
    case 24: outtextxy(X,430,_T("四?川洹? )); break;
    case 25: outtextxy(X,430,_T("台?湾?" )); break;
    case 26: outtextxy(X,430,_T("天?津ò" )); break;
    case 27: outtextxy(X,430,_T("西÷藏?" )); break;
    case 28: outtextxy(X,430,_T("新?疆?" )); break;
    case 29: outtextxy(X,430,_T("云?南?" )); break;
    case 30: outtextxy(X,430,_T("浙?江-" )); break;
    case 31: outtextxy(X,430,_T("重?庆ì" )); break;
	}
		X+=97;
	}
	//////////////////////////////////////////////////////////////////////绘?制?选?项? 
	IMAGE T_img,F_img,RE_img,YX=60+97*Random_number-60,YY=490;
	loadimage(&T_img,_T("正y确ā?png"),50,50);
	loadimage(&F_img,_T("错洙?误ó.png"),50,50);
	loadimage(&RE_img,_T("空?白恪?png",),400,50);
	int F=1;//代洙?表括?是?否?选?择?
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
	 ////////////////////////////////////////////////////////////////////检ì查é是?否?选?择?答鋏案?
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
	initgraph(500,650);//绘?制?画-板?
	IMAGE cover_img;
	loadimage(&cover_img,_T("A封面?.png"),500,650);//加ó载?封面?
	putimage(0,0,&cover_img);//绘?制?封面?
	////////////////////////////////////////////////////////////////////绘?制?封面?
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
	 ////////////////////////////////////////////////////////////////////检ì测a是?否?开a始?
	}
    system("pause");
}

