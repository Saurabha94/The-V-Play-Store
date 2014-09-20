#include <graphics.h>
#include <fstream.h>
#include <iostream.h>
#include <string.h>

extern void signup();
extern void login();

int main()
{   
    initwindow(1275,700);
    setfillstyle(1,1);
    floodfill(100,100,1);
    
    setcolor(12);
    setbkcolor(1);
    settextstyle(0,0,8);
    outtextxy(330,160,"WELCOME TO ");
    outtextxy(140,270,"THE V-PLAY STORE");
    
    setcolor(7);
    rectangle(140,450,440,550);
    rectangle(840,450,1140,550);
    setfillstyle(1,7);
    floodfill(300,500,7);
    setfillstyle(1,7);
    floodfill(950,500,7);
    settextstyle(0,0,4);
    setcolor(0);
    setbkcolor(7);
    outtextxy(170,480,"Sign Up!");
    outtextxy(875,480,"Sign In");
    
    
    int x = getmaxx( );
    int y = getmaxy( );
    setmousequeuestatus(WM_LBUTTONDOWN);
    while(!ismouseclick(WM_LBUTTONDOWN));
    {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        if((x>840 && x<1140) && (y>450 && y<550))
                                        login();
                                        else if((x>140 && x<440) && (y>450 && y<550))
                                        signup();
    }
    system("pause");
    return 0;
}
