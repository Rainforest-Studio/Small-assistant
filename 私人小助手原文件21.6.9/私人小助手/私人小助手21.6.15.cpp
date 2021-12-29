#include<graphics.h>

int main(void){	 
	 initgraph(600,750);

	 //显示  背景  LOGO
	 IMAGE setting_img,logo_img;
	 loadimage(&setting_img,_T("背景1.png"),600,750);
	 loadimage(&logo_img,_T("标题.png"),600,150);
	
	 putimage(0,0,&setting_img);
	 putimage(0,0,&logo_img);

	///////////////////////////////////////////////////////
	/* setlinecolor(BLACK);
	 setfillcolor(WHITE);
	 settextcolor(BLACK);
	 fillrectangle(230,200,310,240);
	 outtextxy(240,210,_T("快速开始"));
	 */
	 IMAGE Qstart_img,start_img;
	 loadimage(&Qstart_img,_T("快速开始.jpg"),200,100);
	 loadimage(&start_img,_T("开始.jpg"),200,100);
	 putimage(70,200,&Qstart_img);
	 putimage(310,200,&start_img);
	 /////////////////////////////////////

	 MOUSEMSG mouse;

	 while(1){
		mouse=GetMouseMsg();
		
		switch(mouse.uMsg){
		case WM_LBUTTONDOWN:
			if(mouse.x > 310 && mouse.x < 510 && mouse.y > 200 && mouse.y <300)
			{
				closegraph();
				system("私人小助手1.exe");
			}
			else
			if(mouse.x > 70 && mouse.x < 270 && mouse.y > 200 && mouse.y <300)
			{
				closegraph();
				system("快捷登录.exe");
			}
	 }
}
//	 system("快捷登录.exe");

	 system("pause");
	 closegraph();//关闭窗口
}

//430 400 590 470