#include<iostream.h>
#include<graphics.h>

extern void home();
extern void recommend(int,int);
extern void ccarddet();

void outparaxy(int x,int y,int size, char arr[])
{
                  int j=0;
                  char arr1[90];
                  for(int i=0;arr[i]!='\0';y=y+size)
                  {
                          for(j=0;(j<90)&&(arr[i]!='\0');j++,i++)
                          {
                                                                 if((j>80) && (arr[i-1]==' '))
                                                                 break;
                                                                 arr1[j]=arr[i];
                          }
                          arr1[j]='\0';
                          outtextxy(x,y,arr1);
                  }
}

void top()
{
     initwindow(1275,700);
     setfillstyle(1,1);
     floodfill(100,100,1);
     setcolor(12);
     setbkcolor(BLUE);
     settextstyle(0,0,2);
     outtextxy(925,670,"Press any key to go back");
     
}
void coninfo()
{
    closegraph();
    top();
    setcolor(12);
    setbkcolor(BLUE);
    settextstyle(0,0,7);
    outtextxy(270,30,"Console Info");
    char rand[]="The V-ROK system can play hundreds of amazing games, from Chessmaster to SOCOM: Fire Team Bravo,starting. Each title is created to maximize the potential of a portable player console-quality graphics and a powerful LCD screen make every game shine, and new games are never in short supply. Download them directly to your V-ROK system from V-Play Store. The V-ROK system comes with Skype(Talk for free),DLNA(remotely access your PC,DVR,TV and more),RSS(Stay on top of it all) and internet browsing(The internet in your hands).";
    char rand1[]="Personalize the XMB™ home menu on your V-ROK system with custom themes, backgrounds and icons.";
    char rand2[]="Manually change your V-ROK system background color - blue when you're feeling blue, orange when you're feeling whatever an orange feels like. Or you can let the V-ROK system work on its own and the background color of the XMB™ will automatically change monthly.";
    char rand3[]="Use your favorite photo or digital image as wallpaper. May we suggest the pic of catching that ridiculous wave? Or the first time you did an Ollie in an empty swimming pool.";
    char rand4[]="Change the whole look - icons and background - with a custom theme. Choose your favorite theme from the V-Play Store or find one online.";
    
    setcolor(10);
    settextstyle(0,0,2);
    outparaxy(50,100,15,rand);
    outparaxy(50,250,15,rand1);
    outparaxy(50,330,15,rand2);
    outparaxy(50,440,15,rand3);
    outparaxy(50,530,15,rand4);
    
    setcolor(12);
    settextstyle(0,0,3);
    outtextxy(50,220,"Go ahead. Make it your own:");
    outtextxy(50,300,"Background colour:");
    outtextxy(50,410,"Wallpaper:");
    outtextxy(50,500,"Custom themes:");
    while(!kbhit());
    home();
    recommend(10,11);
}
void abtus()
{
     closegraph();
    top();
    setcolor(12);
    setbkcolor(BLUE);
    settextstyle(0,0,7);
    outtextxy(400,30,"About Us");
    
    settextstyle(0,0,3);
    outtextxy(50,170,"Address:");
    
    setcolor(10);
    settextstyle(0,0,2);
    outtextxy(50,130,"ROX Network Entertainment India Limited");
    outtextxy(150,220,"1.Head Office");
    outtextxy(150,240,"  #36 Chandrama");
    outtextxy(150,260,"  18th cross,24th main");
    outtextxy(150,280,"  J.P Nagar 6th phase");
    outtextxy(150,300,"  Bangalore-78");
    outtextxy(150,320,"  Ph.no:974103243");
    
    outtextxy(150,360,"2.Branch Office");
    outtextxy(150,380,"  #85 2nd cross,6th main");
    outtextxy(150,400,"  J.P Nagar 3rd phase");
    outtextxy(150,420,"  Bangalore-78");
    outtextxy(150,440,"  Ph.no:974103244");
    
    outtextxy(50,530,"http://in.ROX.com");
    outtextxy(50,550,"Customer Service: PlaywithROX@gmail.com");
    
    while(!kbhit());
    home();
    recommend(10,11);
}
void CT()
{
     closegraph();
    top();
    setcolor(12);
    setbkcolor(BLUE);
    settextstyle(0,0,5);
    outtextxy(170,30,"Copyright and Trademark");
    
    setcolor(10);
    settextstyle(0,0,2);
    outparaxy(30,120,20,"V-ROK is trademarks or registered trademarks of ROX Computer Entertainment Inc. All rights reserved.");
    outparaxy(30,190,20,"ROX, Memory Stick Duo,Memory Stick PRO Duo, MagicGate, Blu-ray Disc and BD are trademarks or registered trademarks of ROX Corporation. All rights reserved.");
    outparaxy(30,270,20,"EyeToy, SingStar, Buzz! and  are trademarks or registered trademarks of ROX Computer Entertainment India. All rights reserved.");
    outparaxy(30,350,20,"All titles, content, publisher names, trademarks, artwork, and associated imagery are trademakes and/or copyright material of their respective owners. All rights reserved.");
    outparaxy(30,420,20,"Website ©2011 ROX Computer Entertainment India.");
    
    while(!kbhit());
    home();
    recommend(10,11);
}
void help()
{
     closegraph();
     top();
     setcolor(12);
    setbkcolor(BLUE);
    settextstyle(0,0,9);
    outtextxy(490,150,"Help");
    outtextxy(300,320,"Yourself!!!");
    while(!kbhit());
    home();
    recommend(10,11);
}

