 #include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
using namespace std;
int along=4;
inline void Refresh(char q[][22], int grade, int gamespeed){
    system("cls");     //  ����
 int i,j;
 cout << endl;
 for(i=0;i<22;i++){
     cout << "\t";
  for(j=0;j<22;j++)
   cout<<q[i][j]<<' ';    //  ���̰��������
        if(i==0) cout << "\t�ȼ�Ϊ��" << grade;
        if(i==4) cout << "\t�Զ�ǰ��ʱ��";
        if(i==6) cout << "\t���Ϊ��" << gamespeed << "ms";
        if(i==8) cout << "\t����Ϊ��" <<along;
  cout<<endl;
 }
}
int main()
{
system("cls");
				char tcsQipan[22][22];     //  ̰����������һ����ά����(��22*22������ǽ��)
    			int i,j;
    			for(i=1;i<=20;i++)
        			for(j=1;j<=20;j++)
            			tcsQipan[i][j]=' ';     //     ��ʼ��̰���������м�հײ���
    			for(i=0;i<=21;i++)
        			tcsQipan[0][i] = tcsQipan[21][i] = '-';      //��ʼ��̰������������ǽ��
    			for(i=1;i<=20;i++)
        			tcsQipan[i][0] = tcsQipan[i][21] = '|';      //��ʼ��̰������������ǽ��
    			int tcsZuobiao[2][100];     //�ߵ���������
    			for(i=0; i<4; i++){
        			tcsZuobiao[0][i] = 1;
        			tcsZuobiao[1][i] = i + 1;
    			}
    			int head = 3,tail = 0;
    			for(i=1;i<=3;i++)
        			tcsQipan[1][i]='#';    //����
    			tcsQipan[1][4]='@';       //��ͷ
    			int x1, y1;           // �������
    			srand(time(0));
    			do{
  			x1=rand()%20+1;
  			y1=rand()%20+1;
 			}while(tcsQipan[x1][y1]!=' ');
 			tcsQipan[x1][y1]='*';
 			cout<<"\n\n\t\t̰������Ϸ������ʼ !"<<endl;//׼����ʼ;;
 			long start;
    			int grade = 1, length = 4;
    			int gamespeed = 500;  //ǰ��ʱ����
 			for(i=3;i>=0;i--){
  			start=clock();
  			while(clock()-start<=1000);
  			system("cls");
  			if(i>0)
   			cout << "\n\n\t\t���뵹��ʱ��" << i << endl;
  			else
   			Refresh(tcsQipan,grade,gamespeed);
 			}
    			int timeover;
    			char direction = 77;  // ��ʼ����£������˶�
    			int x,y;
    			while(1){
        			timeover = 1;
        			start = clock();
        			while((timeover=(clock()-start<=gamespeed))&&!kbhit());
        			     //����м����»�ʱ�䳬���Զ�ǰ��ʱ��������ֹѭ��
        			if(timeover){
       			     getch();direction = getch();
       			 }
       			 switch(direction){
       			 	case 72: x= tcsZuobiao[0][head]-1; y= tcsZuobiao[1][head];break;     // ����
        			case 80: x= tcsZuobiao[0][head]+1; y= tcsZuobiao[1][head];break;      // ����
        			case 75: x= tcsZuobiao[0][head]; y= tcsZuobiao[1][head]-1;break;      // ����
        			case 77: x= tcsZuobiao[0][head]; y= tcsZuobiao[1][head]+1;           // ����
        			}
        			if(!(direction==72||direction==80||direction==75 ||direction==77)){   //  �����Ƿ����
            			    system("cls");cout << "\tGame over! ���ȣ�" << along << endl;Sleep(3000);	    system("cls");system("˽��С����.exe");return 0;
        			}
        			if(x==0 || x==21 ||y==0 || y==21){   // ����ǽ��
            			    system("cls");cout << "\tGame over! ���ȣ�" << along << endl;Sleep(3000);	    system("cls");system("˽��С����.exe");return 0;
        			}
        			if(tcsQipan[x][y]!=' '&&!(x==x1&&y==y1)){ //   ��ͷ��������
            			    system("cls");cout << "\tGame over! ���ȣ�" << along << endl;Sleep(3000);	    system("cls");system("˽��С����.exe");return 0;
        			}
        			if(x==x1 && y==y1){      //  ���ף����ȼ�1
            			length ++;
            			along+=1;
            			if(length>=8){
                			length -= 8;
                			grade ++;
                			if(gamespeed>=200)
                    			gamespeed = 550 - grade * 50; // �ı��Զ�ǰ��ʱ����
            			}
            			tcsQipan[x][y]= '@';
            			tcsQipan[tcsZuobiao[0][head]][tcsZuobiao[1][head]] = '*';
            			head = (head+1)%100;
            			tcsZuobiao[0][head] = x;
            			tcsZuobiao[1][head] = y;
            			do
            			{
                			x1=rand()%20+1;
                			y1=rand()%20+1;
            			}while(tcsQipan[x1][y1]!=' ');
            			tcsQipan[x1][y1]='*';
            			Refresh(tcsQipan,grade,gamespeed);
        			}
       			 else{       //  ������
            			tcsQipan [tcsZuobiao[0][tail]][tcsZuobiao[1][tail]]=' ';
            			tail=(tail+1)%100;
            			tcsQipan [tcsZuobiao[0][head]][tcsZuobiao[1][head]]='#';
            			head=(head+1)%100;
            			tcsZuobiao[0][head]=x;
            			tcsZuobiao[1][head]=y;
            			tcsQipan[tcsZuobiao[0][head]][tcsZuobiao[1][head]]='@';
            			Refresh(tcsQipan,grade,gamespeed);
        			}
    			}
    				system("˽��С����.exe");
    			return 0;
			}
