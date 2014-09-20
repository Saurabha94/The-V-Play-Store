#include<graphics.h>
#include<iostream.h>
#include<math.h>

void processing(int a)
{
    cleardevice();
    setfillstyle(1,1);
    floodfill(100,100,1);
    setcolor(11);
    setbkcolor(1);
    settextstyle(10,0,5);
    outtextxy(500,325,"Processing");
    for(int j=0;j<1;j++)
    {
    for(int i=1;i<7;i++)
    {
            setcolor(0);
            circle(475,345,4);
            setfillstyle(1,i);
            floodfill(475,345,0);delay(200);
            setcolor(0);
            circle(540,280,4);
            floodfill(540,280,0);delay(200);
            setcolor(0);
            circle(625,265,4);
            floodfill(625,265,0);delay(200);
            setcolor(0);
            circle(710,280,4);
            floodfill(710,280,0);delay(200);
            setcolor(0);
            circle(775,345,4);
            floodfill(775,345,0);delay(200);
            setcolor(0);
            circle(710,410,4);
            floodfill(710,410,0);delay(200);
            setcolor(0);
            circle(625,425,4);
            floodfill(625,425,0);delay(200);
            setcolor(0);
            circle(540,410,4);
            floodfill(540,410,0);delay(200);
            setcolor(0);
    }
    }
    if(a==0)
    closegraph();
    
}
