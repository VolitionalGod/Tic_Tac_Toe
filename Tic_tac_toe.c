#include<stdio.h>
#include<conio.h>
void grid(void);
int main(void)
{
int ttt[3][3]={{2,2,2},{2,2,2},{2,2,2}},tr=35,td=9,rmin=35,rmax=43,
rs=4,dmin=9,dmax=13,ds=2,row,col,x=1,o=0,count=0,i,j,mr=50,md=20;
char input;
clrscr();
grid();
gotoxy(mr,1);
printf("Press... ESCape To Quit,");
gotoxy(mr+9,3);
printf("W,A,S,D For Controls.");
gotoxy(mr,md);
printf("Start : Player 1 (X).");
gotoxy(tr,td);
start:
if(count==9)
{
gotoxy(mr,md);
printf("The Result Is A Draw.");
getch();
exit(0);
}
input=getch();
if(input=='a' || input=='A')
{
if(tr!=rmin)
{
tr-=rs;
}
else
{
tr+=rs*2;
}
gotoxy(tr,td);
goto start;
}
else
if(input=='d' || input=='D')
{
if(tr!=rmax)
{
tr+=rs;
}
else
{
tr-=rs*2;
}
gotoxy(tr,td);
goto start;
}
else
if(input=='w' || input=='W')
{
if(td!=dmin)
{
td-=ds;
}
else
{
td+=ds*2;
}
gotoxy(tr,td);
goto start;
}
else
if(input=='s' || input=='S')
{
if(td!=dmax)
{
td+=ds;
}
else
{
td-=ds*2;
}
gotoxy(tr,td);
goto start;
}
else
if(input=='x' || input=='X')
{
if(x==1)
{
row=(td%dmin)/ds;
col=(tr%rmin)/rs;
if(ttt[row][col]==2)
{
gotoxy(mr,md);
printf("Next : Player 2 (O). ");
gotoxy(tr,td);
count++;
x=0;
o=1;
ttt[row][col]=1;
printf("X");
}
}
if(count>4)
{
for(i=0;i<3;i++)
{
if(ttt[i][0]==1 && ttt[i][1]==1 && ttt[i][2]==1)
{
gotoxy(mr,md);
printf("Player 1 (X) Wins Round.");
getch();
exit(0);
}
}
for(j=0;j<3;j++)
{
if(ttt[0][j]==1 && ttt[1][j]==1 && ttt[2][j]==1)
{
gotoxy(mr,md);
printf("Player 1 (X) Wins Round.");
getch();
exit(0);
}
}
if(ttt[0][0]==1 && ttt[1][1]==1 && ttt[2][2]==1)
{
gotoxy(mr,md);
printf("Player 1 (X) Wins Round.");
getch();
exit(0);
}
if(ttt[0][2]==1 && ttt[1][1]==1 && ttt[2][0]==1)
{
gotoxy(mr,md);
printf("Player 1 (X) Wins Round.");
getch();
exit(0);
}
}
goto start;
}
else
if(input=='o' || input=='O')
{
if(o==1)
{
row=(td%dmin)/ds;
col=(tr%rmin)/rs;
if(ttt[row][col]==2)
{
gotoxy(mr,md);
printf("Next : Player 1 (X). ");
gotoxy(tr,td);
count++;
o=0;
x=1;
ttt[row][col]=0;
printf("0");
}
}
if(count>5)
{
for(i=0;i<3;i++)
{
if(ttt[i][0]==0 && ttt[i][1]==0 && ttt[i][2]==0)
{
gotoxy(mr,md);
printf("Player 2 (O) Wins Round.");
getch();
exit(0);
}
}
for(j=0;j<3;j++)
{
if(ttt[0][j]==0 && ttt[1][j]==0 && ttt[2][j]==0)
{
gotoxy(mr,md);
printf("Player 2 (O) Wins Round.");
getch();
exit(0);
}
}
if(ttt[0][0]==0 && ttt[1][1]==0 && ttt[2][2]==0)
{
gotoxy(mr,md);
printf("Player 2 (O) Wins Round.");
getch();
exit(0);
}
if(ttt[0][2]==0 && ttt[1][1]==0 && ttt[2][0]==0)
{
gotoxy(mr,md);
printf("Player 2 (O) Wins Round.");
getch();
exit(0);
}
}
goto start;
}
else
if(input!=27)
{
goto start;
}
return(0);
}
void grid(void)
{
int tl=201,hl=205,td=203,tr=187,vl=186,ls=204,cc=206,rs=185,bl=200,bu=202,
br=188,right=33,down=8,grid_width=13,i;
gotoxy(right,down);
printf("%c",tl);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",td);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",td);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",tr);
down++;
for(i=right;i<right+grid_width;i+=4)
{
gotoxy(i,down);
printf("%c",vl);
}
down++;
gotoxy(right,down);
printf("%c",ls);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",cc);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",cc);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",rs);
down++;
for(i=right;i<right+grid_width;i+=4)
{
gotoxy(i,down);
printf("%c",vl);
}
down++;
gotoxy(right,down);
printf("%c",ls);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",cc);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",cc);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",rs);
down++;
for(i=right;i<right+grid_width;i+=4)
{
gotoxy(i,down);
printf("%c",vl);
}
down++;
gotoxy(right,down);
printf("%c",bl);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",bu);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",bu);
printf("%c",hl);
printf("%c",hl);
printf("%c",hl);
printf("%c",br);
}

