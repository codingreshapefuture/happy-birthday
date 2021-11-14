#include <graphics.h>
#include <stdlib.h>
void balloons(int x[],int y[])
{
	for(int i=0;i<12;i++)
	{
		if(i==2) i++;
		setlinestyle(3,2,3); setcolor(0); line(x[i],y[i]+70,x[i],y[i]+180);
		setfillstyle(1,0); setcolor(0);
		fillellipse(x[i],y[i],50,70);
		setfillstyle(1,13); setcolor(13); y[i]-=20;
		fillellipse(x[i],y[i],50,70);
		setlinestyle(3,2,1); setcolor(15); line(x[i],y[i]+70,x[i],y[i]+180);
		if(y[i]<-200) y[i]=700;
		settextstyle(2,0,5); setbkcolor(13); setcolor(15); outtextxy(x[i]-40,y[i],"Happy Birthday");
	}
}
int main()
{
	int x[12]={50,200,350,400,550,700,850,1000,1150,1300,1450,1600};
	int y[12]={700,500,250,350,400,550,350,150,563,123,456,125};
	initwindow(1360,720);
	while(1)
	{
		settextstyle(6,0,20);setcolor(12); setbkcolor(0); outtextxy(80,200,"Happy Birthday");
		balloons(x,y);
		delay(100);
	}
}
