#include <iostream.h>
#include <graphics.h>

extern void outintxy(int,int,int);
extern void thank();

void download()
{
    closegraph();
    initwindow(1275,700);
    setfillstyle(1,1);
    floodfill(100,100,1);
    
    setcolor(11);
    setbkcolor(1);
    settextstyle(10,0,5);
    outtextxy(30,275,"Downloading");                                     //Download bar start
    setcolor(15);
    moveto(40,325);
    lineto(1230,325);
    arc(40,335,90,270,10);
    moveto(40,345);
    lineto(1230,345);
    arc(1230,335,270,90,10);                                             //Download bar end
    
    settextstyle(10,0,7);
    setbkcolor(1);
    setcolor(1);                                                //Increasing bar
    for(int i=0,j=40;i<100;i++,j=j+12)
    {
            outintxy(1120,250,i);
            outtextxy(1200,250,"%");
            setcolor(15);
            moveto(j,325);
            lineto(j,345);
            setcolor(11);
            setfillstyle(1,11);
            floodfill(j-2,335,15);
            delay(200);
    }
    delay(3000);
    outtextxy(1100,250,"100%");
    floodfill(1231,335,15);
    
    setcolor(0);                                                  //Done button
    rectangle(1075,580,1205,650);
    setfillstyle(1,7);
    floodfill(1100,600,0);
    setbkcolor(7);
    settextstyle(0,0,3);
    outtextxy(1090,605,"Done");
    
    int x=0,y=0;
    x = getmaxx( );
    y = getmaxy( );
      
      
    setmousequeuestatus(WM_LBUTTONDOWN);
    while(!ismouseclick(WM_LBUTTONDOWN));
    {
               getmouseclick(WM_LBUTTONDOWN,x,y);
    }
        
    if(( x > 1075 && x < 1205 ) && ( y > 580 && y < 650 ))
    {
         thank();
    }
    system("pause");
}
     
