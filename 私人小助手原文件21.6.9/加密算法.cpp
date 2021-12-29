#include<bits/stdc++.h>
using namespace std;
struct MIMA{
	map<char,char>ENCRYPTION,DECODE;
}mima[10];
void MIMACSH( )
{
	mima[1].ENCRYPTION['1']='Q';
	mima[1].ENCRYPTION['2']='f';
	mima[1].ENCRYPTION['3']='e';
	mima[1].ENCRYPTION['4']='B';
	mima[1].ENCRYPTION['5']='J';
	mima[1].ENCRYPTION['6']='t';
	mima[1].ENCRYPTION['7']='u';
	mima[1].ENCRYPTION['8']='D';
	mima[1].ENCRYPTION['9']='h';
	mima[1].ENCRYPTION['0']='p';
	mima[1].DECODE['Q']='1';
	mima[1].DECODE['f']='2';
	mima[1].DECODE['e']='3';
	mima[1].DECODE['B']='4';
	mima[1].DECODE['J']='5';
	mima[1].DECODE['t']='6';
	mima[1].DECODE['u']='7';
	mima[1].DECODE['D']='8';
	mima[1].DECODE['h']='9';
	mima[1].DECODE['p']='0';
	////////////////////////////  1
	mima[2].DECODE['r']='0';
mima[2].ENCRYPTION['0']='r';
mima[2].DECODE['A']='1';
mima[2].ENCRYPTION['1']='A';
mima[2].DECODE['y']='2';
mima[2].ENCRYPTION['2']='y';
mima[2].DECODE['I']='3';
mima[2].ENCRYPTION['3']='I';
mima[2].DECODE['O']='4';
mima[2].ENCRYPTION['4']='O';
mima[2].DECODE['u']='5';
mima[2].ENCRYPTION['5']='u';
mima[2].DECODE['c']='6';
mima[2].ENCRYPTION['6']='c';
mima[2].DECODE['q']='7';
mima[2].ENCRYPTION['7']='q';
mima[2].DECODE['r']='8';
mima[2].ENCRYPTION['8']='r';
mima[2].DECODE['l']='9';
mima[2].ENCRYPTION['9']='l';
////////////////////////////  2
mima[3].DECODE['e']='0';
mima[3].ENCRYPTION['0']='e';
mima[3].DECODE['D']='1';
mima[3].ENCRYPTION['1']='D';
mima[3].DECODE['H']='2';
mima[3].ENCRYPTION['2']='H';
mima[3].DECODE['q']='3';
mima[3].ENCRYPTION['3']='q';
mima[3].DECODE['U']='4';
mima[3].ENCRYPTION['4']='U';
mima[3].DECODE['b']='5';
mima[3].ENCRYPTION['5']='b';
mima[3].DECODE['n']='6';
mima[3].ENCRYPTION['6']='n';
mima[3].DECODE['m']='7';
mima[3].ENCRYPTION['7']='m';
mima[3].DECODE['y']='8';
mima[3].ENCRYPTION['8']='y';
mima[3].DECODE['t']='9';
mima[3].ENCRYPTION['9']='t';
////////////////////////////  3
mima[4].DECODE['l']='0';
mima[4].ENCRYPTION['0']='l';
mima[4].DECODE['I']='1';
mima[4].ENCRYPTION['1']='I';
mima[4].DECODE['o']='2';
mima[4].ENCRYPTION['2']='o';
mima[4].DECODE['l']='3';
mima[4].ENCRYPTION['3']='l';
mima[4].DECODE['s']='4';
mima[4].ENCRYPTION['4']='s';
mima[4].DECODE['t']='5';
mima[4].ENCRYPTION['5']='t';
mima[4].DECODE['H']='6';
mima[4].ENCRYPTION['6']='H';
mima[4].DECODE['j']='7';
mima[4].ENCRYPTION['7']='j';
mima[4].DECODE['q']='8';
mima[4].ENCRYPTION['8']='q';
mima[4].DECODE['d']='9';
mima[4].ENCRYPTION['9']='d';
////////////////////////////  4
mima[5].DECODE['K']='0';
mima[5].ENCRYPTION['0']='K';
mima[5].DECODE['R']='1';
mima[5].ENCRYPTION['1']='R';
mima[5].DECODE['G']='2';
mima[5].ENCRYPTION['2']='G';
mima[5].DECODE['X']='3';
mima[5].ENCRYPTION['3']='X';
mima[5].DECODE['F']='4';
mima[5].ENCRYPTION['4']='F';
mima[5].DECODE['E']='5';
mima[5].ENCRYPTION['5']='E';
mima[5].DECODE['A']='6';
mima[5].ENCRYPTION['6']='A';
mima[5].DECODE['B']='7';
mima[5].ENCRYPTION['7']='B';
mima[5].DECODE['x']='8';
mima[5].ENCRYPTION['8']='x';
mima[5].DECODE['P']='9';
mima[5].ENCRYPTION['9']='P';
////////////////////////////  5
mima[6].DECODE['B']='0';
mima[6].ENCRYPTION['0']='B';
mima[6].DECODE['i']='1';
mima[6].ENCRYPTION['1']='i';
mima[6].DECODE['O']='2';
mima[6].ENCRYPTION['2']='O';
mima[6].DECODE['X']='3';
mima[6].ENCRYPTION['3']='X';
mima[6].DECODE['n']='4';
mima[6].ENCRYPTION['4']='n';
mima[6].DECODE['H']='5';
mima[6].ENCRYPTION['5']='H';
mima[6].DECODE['q']='6';
mima[6].ENCRYPTION['6']='q';
mima[6].DECODE['p']='7';
mima[6].ENCRYPTION['7']='p';
mima[6].DECODE['F']='8';
mima[6].ENCRYPTION['8']='F';
mima[6].DECODE['g']='9';
mima[6].ENCRYPTION['9']='g';
////////////////////////////  6
mima[7].DECODE['l']='0';
mima[7].ENCRYPTION['0']='l';
mima[7].DECODE['u']='1';
mima[7].ENCRYPTION['1']='u';
mima[7].DECODE['W']='2';
mima[7].ENCRYPTION['2']='W';
mima[7].DECODE['E']='3';
mima[7].ENCRYPTION['3']='E';
mima[7].DECODE['x']='4';
mima[7].ENCRYPTION['4']='x';
mima[7].DECODE['m']='5';
mima[7].ENCRYPTION['5']='m';
mima[7].DECODE['P']='6';
mima[7].ENCRYPTION['6']='P';
mima[7].DECODE['l']='7';
mima[7].ENCRYPTION['7']='l';
mima[7].DECODE['r']='8';
mima[7].ENCRYPTION['8']='r';
mima[7].DECODE['y']='9';
mima[7].ENCRYPTION['9']='y';
////////////////////////////  7
mima[8].DECODE['c']='0';
mima[8].ENCRYPTION['0']='c';
mima[8].DECODE['A']='1';
mima[8].ENCRYPTION['1']='A';
mima[8].DECODE['y']='2';
mima[8].ENCRYPTION['2']='y';
mima[8].DECODE['F']='3';
mima[8].ENCRYPTION['3']='F';
mima[8].DECODE['q']='4';
mima[8].ENCRYPTION['4']='q';
mima[8].DECODE['m']='5';
mima[8].ENCRYPTION['5']='m';
mima[8].DECODE['i']='6';
mima[8].ENCRYPTION['6']='i';
mima[8].DECODE['j']='7';
mima[8].ENCRYPTION['7']='j';
mima[8].DECODE['n']='8';
mima[8].ENCRYPTION['8']='n';
mima[8].DECODE['V']='9';
mima[8].ENCRYPTION['9']='V';
////////////////////////////  8
mima[9].DECODE['F']='0';
mima[9].ENCRYPTION['0']='F';
mima[9].DECODE['s']='1';
mima[9].ENCRYPTION['1']='s';
mima[9].DECODE['Q']='2';
mima[9].ENCRYPTION['2']='Q';
mima[9].DECODE['F']='3';
mima[9].ENCRYPTION['3']='F';
mima[9].DECODE['J']='4';
mima[9].ENCRYPTION['4']='J';
mima[9].DECODE['M']='5';
mima[9].ENCRYPTION['5']='M';
mima[9].DECODE['I']='6';
mima[9].ENCRYPTION['6']='I';
mima[9].DECODE['q']='7';
mima[9].ENCRYPTION['7']='q';
mima[9].DECODE['A']='8';
mima[9].ENCRYPTION['8']='A';
mima[9].DECODE['l']='9';
mima[9].ENCRYPTION['9']='l';
////////////////////////////  9

	
}
int main()
{
	
	MIMACSH( );///////////////////////////////≥ı ºªØ √‹¬Î±Ì 
	int a[101],b[101],j=0,cc[1001];
	char ch[101];
	gets(ch);
	int len=strlen(ch);
	ofstream out("√‹¬Î.txt");
	out<<len<<" ";
	for(int i=0;i<len;i++)
	{
		int k=rand()%9+1;
		out<<mima[k].ENCRYPTION[ch[i]];
		cc[++j]=k;
	}
	out<<" ";
	for(int i=1;i<=len;i++) out<<cc[i];
		out.close();
	/////////////////////////////////////////////////////////////////////
	//Ω‚¬Î
	int aa[1001],n; char c[1001],cn;
	ifstream in("√‹¬Î.txt");
	in>>cn;
	n=cn-'0';
	for(int i=1;i<=n;i++) 
	{
		in>>ch[i];
		cout<<mima[i].DECODE[ch[i]];
	}
	in.close();
	
}
// 1234  +

