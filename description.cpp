#include<iostream.h>
#include<graphics.h>

void descreen()
{
    closegraph();
    initwindow(1275,700);
    setfillstyle(1,1);
    floodfill(100,100,1);
    
    setcolor(0);
    rectangle(18,580,202,630);
    rectangle(0,0,220,125);                                    //Top options                         
    rectangle(220,0,430,125);
    rectangle(430,0,640,125);
    rectangle(640,0,850,125);
    rectangle(850,0,1060,125);
    rectangle(1060,0,1275,125);
    rectangle(1060,0,1275,40);
    moveto(1225,0);
    lineto(1225,40);
    moveto(220,125);
    lineto(220,700);
    moveto(220,175);
    lineto(1275,175);
    
    setfillstyle(1,7);
    floodfill(230,10,0);
    floodfill(440,10,0);
    floodfill(650,10,0);
    floodfill(860,10,0);
    floodfill(1070,10,0);
    floodfill(1070,60,0);
    floodfill(50,625,0);
    
    setfillstyle(1,0);
    floodfill(10,10,0);
    setfillstyle(1,4);
    floodfill(1250,10,0);
    setfillstyle(1,2);
    floodfill(5,150,0);
    setfillstyle(1,15);
    floodfill(300,135,0);
    
    setbkcolor(0);
    setcolor(9);
    settextstyle(0,0,4);
    outtextxy(65,10,"The");
    outtextxy(15,45,"V-Play");
    outtextxy(30,80,"Store");
    
    setbkcolor(7);
    setcolor(0);
    
    settextstyle(0,0,3);
    outtextxy(240,30,"Console");
    outtextxy(280,65,"Info");
    
    outtextxy(25,595,"Buy");
    outtextxy(105,595,"Now!");
    
    outtextxy(475,30,"About");
    outtextxy(510,65,"Us");
    
    outtextxy(1085,55,"Account");
    outtextxy(1085,90,"Details");
    
    settextstyle(0,0,2);
    outtextxy(680,30,"Copyright");
    outtextxy(725,55,"And");
    outtextxy(680,80,"Trademark");
    
    outtextxy(1082,12,"Sign Out");
    
    settextstyle(0,0,5);
    outtextxy(859,42,"HELP!");
    
    setbkcolor(4);
    outtextxy(1230,0,"X");
    
    settextstyle(0,0,4);
    setcolor(1);
    setbkcolor(15);
    outtextxy(230,135,"Name:");
    
    setbkcolor(1);
    setcolor(10);
    settextstyle(5,0,5);
    outtextxy(240,200,"Description:");
    moveto(240,240);
    lineto(450,240);
}
