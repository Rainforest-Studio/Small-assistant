#include<graphics.h>

int main(void){	 
	 initgraph(600,750);

	 //��ʾ  ����  LOGO
	 IMAGE setting_img,logo_img;
	 loadimage(&setting_img,_T("����1.png"),600,750);
	 loadimage(&logo_img,_T("����.png"),600,150);
	
	 putimage(0,0,&setting_img);
	 putimage(0,0,&logo_img);

	///////////////////////////////////////////////////////
	/* setlinecolor(BLACK);
	 setfillcolor(WHITE);
	 settextcolor(BLACK);
	 fillrectangle(230,200,310,240);
	 outtextxy(240,210,_T("���ٿ�ʼ"));
	 */
	 IMAGE Qstart_img,start_img;
	 loadimage(&Qstart_img,_T("���ٿ�ʼ.jpg"),200,100);
	 loadimage(&start_img,_T("��ʼ.jpg"),200,100);
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
				system("˽��С����1.exe");
			}
			else
			if(mouse.x > 70 && mouse.x < 270 && mouse.y > 200 && mouse.y <300)
			{
				closegraph();
				system("��ݵ�¼.exe");
			}
	 }
}
//	 system("��ݵ�¼.exe");

	 system("pause");
	 closegraph();//�رմ���
}

//430 400 590 470