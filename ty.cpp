#include <iostream.h>
#include <graphics.h>

extern void home();
extern void recommend(int,int);

void thank()
{
    closegraph();
    initwindow(1275,700);
    setfillstyle(1,1);
    floodfill(1,1,1);
    settextstyle(1,0,7);
    setcolor(10);
    setbkcolor(1);
    outtextxy(70,250,"Thankyou for the Purchase");
    delay(3000);
    home();
    recommend(10,11);
}
