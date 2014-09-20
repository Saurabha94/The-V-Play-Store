#include <graphics.h>
#include <iostream.h>
#include <ctype.h>
#include <fstream.h>


extern void processing(int);
extern void home();
extern void recommend(int,int);
extern void inputlogin(int,int,int);
extern int main();
extern void deleacc(); 
extern void outintxy(int,int,int);


char usernam[20]; 

int ccno[16];
int date,month,year,cnr,num,amount;


int numpad()
{
    
    int a = getmaxx( );
    int b = getmaxy( );
    setmousequeuestatus(WM_LBUTTONDOWN);
    while(!ismouseclick(WM_LBUTTONDOWN));
    {
                                        getmouseclick(WM_LBUTTONDOWN,a,b);
                                        if((a>910 && a<980) && (b>110 && b<190))
                                        return 0;
                                        else if((a>790 && a<860) && (b>220 && b<290))
                                        return 1;
                                        else if((a>910 && a<980) && (b>220 && b<290))
                                        return 2;
                                        else if((a>1030 && a<1100) && (b>220 && b<290))
                                        return 3;
                                        else if((a>790 && a<860) && (b>320 && b<390))
                                        return 4;
                                        else if((a>910 && a<980) && (b>320 && b<390))
                                        return 5;
                                        else if((a>1030 && a<1100) && (b>320 && b<390))
                                        return 6;
                                        else if((a>790 && a<860) && (b>420 && b<490))
                                        return 7;
                                        else if((a>910 && a<980) && (b>420 && b<490))
                                        return 8;
                                        else if((a>1030 && a<1100) && (b>420 && b<490))
                                        return 9;
                                        else if((a>900 && a<990) && (b>540 && b<610))
                                        return -1;
                                        else 
                                        return -10;
                                        
    }
}


void addfunds()
{
     cleardevice();
    setfillstyle(1,1);
    floodfill(100,100,1); 
    settextstyle(8,0,4);
    setbkcolor(1);
    setcolor(15);
    outtextxy(200,50,"First Name           :");
    outtextxy(200,250,"Last Name            :");
    outtextxy(200,450,"User Name            :");
    
    rectangle(750,30,1050,90);
    rectangle(750,230,1050,290);
    rectangle(750,430,1050,490);
    
    setcolor(12);
    setbkcolor(1);
    settextstyle(1,0,3);
    outtextxy(425,610,"Press enter to continue");
}



void inputnum(int x,int y, int s)
{
     int x1=x,i=0;
     while(!kbhit())                                   //ccardnumber1
     {
                 settextstyle(1,0,3);
                 setcolor(0);   
                 moveto(x,y);
                 lineto(x,y+20);
                 delay(100);
                 setcolor(1);
                 lineto(x,y);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 else
                 {
                     ccno[i]=num;
                     settextstyle(8,0,2);
                     outintxy(x,y,num);
                     x=x+s;i++;
                 }
     }
     x=x1;
     while(!kbhit())                                   //ccardnumber2
     {
                 settextstyle(1,0,3);
                 setcolor(0);   
                 moveto(x+150,y);
                 lineto(x+150,y+10);
                 delay(100);
                 setcolor(1);
                 lineto(x+150,y);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 ccno[i]=num;
                 settextstyle(8,0,2);
                 outintxy(x+150,y,num);
                 x=x+s;i++;
     }
     
      x=x1;
     while(!kbhit())                                   //ccardnumber3
     {
                 settextstyle(1,0,3);
                 setcolor(0);   
                 moveto(x+300,y);
                 lineto(x+300,y+10);
                 delay(100);
                 setcolor(1);
                 lineto(x+300,y);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 ccno[i]=num;
                 settextstyle(8,0,2);
                 outintxy(x+300,y,num);
                 x=x+s;i++;
     }
     
      x=x1;
     while(!kbhit())                                   //ccardnumber4
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x+450,y);
                 lineto(x+450,y+10);
                 delay(100);
                 setcolor(1);
                 lineto(x+450,y);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 ccno[i]=num;
                 settextstyle(8,0,2);
                 outintxy(x+450,y,num);
                 x=x+s;i++;
     }
     
     x=x1; i=0;
     while(!kbhit())                                   //expiry date
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x+100,y+170);
                 lineto(x+100,y+180);
                 delay(100);
                 setcolor(1);
                 lineto(x+100,y+170);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 else
                 {
                     if(i==0)
                     date=num*10;
                     else
                     date=date+num;
                     settextstyle(8,0,2);
                     outintxy(x+100,y+170,num);
                     x=x+s;i++;
                 }
     }
     
     x=x1; i=0;
     while(!kbhit())                                   //expiry month
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x+210,y+170);
                 lineto(x+210,y+180);
                 delay(100);
                 setcolor(1);
                 lineto(x+210,y+170);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 
                 else
                 {
                     if(i==0)
                     month=num*10;
                     else
                     month=month+num;
                     settextstyle(8,0,2);
                     outintxy(x+210,y+170,num);
                     x=x+s;i++;
                 }
     }
     
     
     x=x1; i=0;
     while(!kbhit())                                   //expiry year
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x+330,y+170);
                 lineto(x+330,y+180);
                 delay(100);
                 setcolor(1);
                 lineto(x+330,y+170);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                                 
                 else
                 {
                     if(i==0)
                     year=num*1000;
                     else if(i==1)
                     year=year+num*100;
                     else if(i==2)
                     year=year+num*10;
                     else if(i==3)
                     year=year+num;
                     settextstyle(8,0,2);
                     outintxy(x+330,y+170,num);
                     x=x+s;i++;
                 }
     }
     
      x=x1; i=0;
     while(!kbhit())                                   //cnr number
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x+300,y+270);
                 lineto(x+300,y+280);
                 delay(100);
                 setcolor(1);
                 lineto(x+300,y+270);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 else
                 {
                     if(i==0)
                     cnr=num*100;
                     else if(i==1)
                     cnr=cnr+num*10;
                     else 
                     cnr=cnr+num;
                     settextstyle(8,0,2);
                     outintxy(x+300,y+270,num);
                     x=x+s;i++;
                 }
     }

      x=x1; i=0;
     while(!kbhit())                                   //Amount
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x+300,y+400);
                 lineto(x+300,y+410);
                 delay(100);
                 setcolor(1);
                 lineto(x+300,y+400);
                 setcolor(15);   
                 setbkcolor(1);
                 num=numpad();
                 if (num==-1)                //return value for "tab"=9
                 break;
                 else if(num==-10)
                 continue;
                 
                 else
                 {
                     if(i==0)
                     amount=num*1000;
                     else if(i==1)
                     amount=amount+num*100;
                     else if(i==2)
                     amount=amount+num*10;
                     else
                     amount=amount+num;
                     settextstyle(8,0,2);
                     outintxy(x+300,y+400,num);
                     x=x+s;i++;
                 }
     }
}
     
void numpadshow()
{
     cleardevice();
     setfillstyle(1,1);
    floodfill(100,100,1);
    setcolor(12);
    setbkcolor(1);
    settextstyle(0,0,4);
    outtextxy(730,60,"Virtual Num-pad");
    
    setcolor(7);
    rectangle(910,120,980,190);                 //0
    
    rectangle(790,220,860,290);                //1
    rectangle(910,220,980,290);                //2
    rectangle(1030,220,1100,290);              //3
    
    rectangle(790,320,860,390);                //4
    rectangle(910,320,980,390);                //5
    rectangle(1030,320,1100,390);              //6
    
    rectangle(790,420,860,490);                //7
    rectangle(910,420,980,490);                //8
    rectangle(1030,420,1100,490);               //9
    
    rectangle(900,540,990,610);                 //tab
    
    setfillstyle(1,7);
    floodfill(920,140,7);
    floodfill(800,240,7);
    floodfill(920,240,7);
    floodfill(1050,240,7);
    floodfill(800,340,7);
    floodfill(920,340,7);
    floodfill(1050,340,7);
    floodfill(800,440,7);
    floodfill(920,440,7);
    floodfill(1050,440,7);
    floodfill(920,560,7);
    
    setcolor(0);
    setbkcolor(7);
    settextstyle(0,0,5);
    
    outtextxy(925,140,"0");
    outtextxy(925,240,"2");
    outtextxy(925,340,"5");
    outtextxy(925,440,"8");
    
    outtextxy(805,240,"1");
    outtextxy(805,340,"4");
    outtextxy(805,440,"7");
    
    outtextxy(1045,240,"3");
    outtextxy(1045,340,"6");
    outtextxy(1045,440,"9");
    
    settextstyle(0,0,3);
    outtextxy(910,560,"Tab");
    
    settextstyle(8,0,4);
    setbkcolor(1);
    setcolor(15);
    moveto(660,0);
    lineto(660,700);
    
    outtextxy(30,50,"Debit Card Number :");
    rectangle(50,110,150,160);
    rectangle(200,110,300,160);
    rectangle(350,110,450,160);
    rectangle(500,110,600,160);
    
    outtextxy(30,220,"Expiry Date  :");
    rectangle(140,280,220,330);
    rectangle(260,280,340,330);
    rectangle(380,280,480,330);
    
    outtextxy(30,390,"CNR number  :");
    rectangle(350,380,440,430);
    
    outtextxy(30,520," Amount     :");
    rectangle(350,510,520,560);
    settextstyle(8,0,1);
    outtextxy(20,560,"(Greater than Rs.1000)");
    
    settextstyle(8,0,2);
    setcolor(12);
    outtextxy(125,640,"Press Tab to continue");
    
    inputnum(60,120,20);
    
}

void inputcredit(int x,int y,int s)
{
     char array[2];
     addfunds();
     int i=0,x1=x;
     while(!kbhit())                            //fname
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y-10);
                 lineto(x,y+10);
                 delay(100);
                 setcolor(1);
                 lineto(x,y-10);
                 setcolor(15);
                 setbkcolor(1);   
                 array[0]=(char)getch();
                 if (array[0]==9)                //ascii value for "tab"=9
                 break;
                 array[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y-10,array);
                 x=x+s;
     }
     x=x1;
     while(!kbhit())                                   //lname
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y+195);
                 lineto(x,y+215);
                 delay(100);
                 setcolor(1);
                 lineto(x,y+195);
                 setcolor(15);
                 setbkcolor(1);
                 array[0]=(char)getch();
                 if (array[0]==9)                //ascii value for "tab"=9
                 break;
                 array[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y+195,array);
                 x=x+s;
     }
     x=x1;i=0;
     while(!kbhit())                                   //username
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y+395);
                 lineto(x,y+405);
                 delay(100);
                 setcolor(1);
                 lineto(x,y+395);
                 setcolor(15);
                 setbkcolor(1);
                 array[0]=(char)getch();
                 if (array[0]==13)                //ascii value for "enter"=13
                 break;
                 if(array[0]==8)
                 {
                              setcolor(1);
                              i=i-1; x=x-s;
                              array[0]=usernam[i];
                              outtextxy(x,y-10,array);
                              usernam[i]='\0';
                              continue;
                 }
                 array[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y+395,array);
                 usernam[i]=array[0];
                 x=x+s;i++;
     }
     
     numpadshow();
}


int ccardcheck()
{
    int number=1;
    
    int j=sizeof(ccno);
    
    for(int k=0; k<3;k++)
    cnr=(int)cnr/10;
    
    if(j!=64)
    number=0;
    else if(date>31)
    number=0;
    else if(month>12)
    number=0;
    else if(year<2011)
    number=0;
    else if(cnr!=0)
    number=0;
    
    return number;     
}           
     

