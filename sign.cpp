#include <graphics.h>
#include <fstream.h>
#include <iostream.h>
#include <string.h>
#include <ctype.h>

extern void descreen();
extern void home();
extern void recommend(int,int);
extern void processing(int);
extern void action(int,int);
extern void RPG(int,int);
extern void driving(int,int);
extern void fighting(int,int);
extern void shooting(int,int);
extern void sports(int,int);
extern void strategy(int,int);
extern void del();
extern void main1();
extern int main();
extern void outintxy(int,int,int);
extern void numpad();
extern void addfunds();
extern void inputnum(int,int,int);
extern void numpadshow();
extern void inputcredit(int,int,int);
extern int ccardcheck();
extern int amount;
extern char usernam[20]; 
extern void download();



struct user
{
       int funds;         
      char username[20];
      char check[20];
      char password[20];
      char fname[20],lname[20];
}user1,user2,user3;

char arr[2];

void inputsignup(int x,int y,int s)
{
     user1.funds=0;
     int i=0,x1=x;
     while(!kbhit())
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y-10);
                 lineto(x,y+10);
                 delay(100);
                 setcolor(1);
                 lineto(x,y-10);
                 setcolor(15);   
                 arr[0]=(char)getch();
                 if (arr[0]==9)                //ascii value for "tab"=9
                 break;
                 if(arr[0]==8)
                 {
                              setcolor(1);
                              i=i-1; x=x-s;
                              arr[0]=user1.fname[i];
                              outtextxy(x,y-10,arr);
                              user1.fname[i]='\0';
                              continue;
                 }
                 arr[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y-10,arr);
                 user1.fname[i]=arr[0];
                 x=x+s;i++;
     }
     user1.fname[i]='\0';
     x=x1;i=0;
     while(!kbhit())
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y+115);
                 lineto(x,y+135);
                 delay(100);
                 setcolor(1);
                 lineto(x,y+115);
                 setcolor(15);
                 arr[0]=(char)getch();
                 if (arr[0]==9)                //ascii value for "tab"=9
                 break;
                 if(arr[0]==8)
                 {
                              setcolor(1);
                              i=i-1; x=x-s;
                              arr[0]=user1.lname[i];
                              outtextxy(x,y+115,arr);
                              user1.lname[i]='\0';
                              continue;
                 }
                 arr[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y+115,arr);
                 user1.lname[i]=arr[0];
                 x=x+s;i++;
     }
     user1.lname[i]='\0';
     x=x1;i=0;
     while(!kbhit())
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y+235);
                 lineto(x,y+255);
                 delay(100);
                 setcolor(1);
                 lineto(x,y+235);
                 setcolor(15);   
                 arr[0]=(char)getch();
                 if (arr[0]==9)                //ascii value for "tab"=9
                 break;
                 if(arr[0]==8)
                 {
                              setcolor(1);
                              i=i-1; x=x-s;
                              arr[0]=user1.username[i];
                              outtextxy(x,y+235,arr);
                              user1.username[i]='\0';
                              continue;
                 }
                 arr[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y+235,arr);
                 user1.username[i]=arr[0];
                 x=x+s;i++;
     }
     user1.username[i]='\0';
     x=x1;i=0;
     while(!kbhit())
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y+355);
                 lineto(x,y+375);
                 delay(100);
                 setcolor(1);
                 lineto(x,y+355);
                 setcolor(15);   
                 arr[0]=(char)getch();
                 if (arr[0]==9)                //ascii value for "tab"=9
                 break;
                 if(arr[0]==8)
                 {
                              setcolor(1);
                              i=i-1; x=x-s;
                              arr[0]=user1.password[i];
                              outtextxy(x,y+355,arr);
                              user1.password[i]='\0';
                              continue;
                 }
                 arr[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y+355,"*");
                 user1.password[i]=arr[0];
                 x=x+s;i++;
     }
     user1.password[i]='\0';
     x=x1;i=0;
     while(!kbhit())
     {
                 settextstyle(8,0,4);
                 setcolor(0);   
                 moveto(x,y+475);
                 lineto(x,y+495);
                 delay(100);
                 setcolor(1);
                 lineto(x,y+475);
                 setcolor(15);   
                 arr[0]=(char)getch();
                 if (arr[0]==13)                //ascii value for "enter"=13
                 break;
                 if(arr[0]==8)
                 {
                              setcolor(1);
                              i=i-1; x=x-s;
                              arr[0]=user1.check[i];
                              outtextxy(x,y+475,arr);
                              user1.check[i]='\0';
                              continue;
                 }
                 arr[1]='\0';
                 settextstyle(8,0,2);
                 outtextxy(x,y+475,"*");
                 user1.check[i]=arr[0];
                 x=x+s;i++;
     }
     user1.check[i]='\0';
     
}

void inputlogin(int x,int y,int sp)
{
     char arr[1];
     int i=0,x1=x;
     int p = getmaxx( );
     int q = getmaxy( );
     setmousequeuestatus(WM_LBUTTONDOWN);
     while(!ismouseclick(WM_LBUTTONDOWN));
     {
          getmouseclick(WM_LBUTTONDOWN,p,q);
          if((p>690 && p<1000) && (q>190 && q<260))
          {
                    i=0;
                    while(!kbhit())
                    {
                                   settextstyle(8,0,4);
                                   setcolor(0);   
                                   moveto(x,y-10);
                                   lineto(x,y+10);
                                   delay(100);
                                   setcolor(1);
                                   lineto(x,y-10);
                                   setcolor(15);   
                                   arr[0]=(char)getch();
                                   if ((arr[0]==9)||(arr[0]==13))                //ascii value for "tab"=9
                                   break;
                                   if(arr[0]==8)
                                   {
                                                 setcolor(1);
                                                 i=i-1; x=x-sp;
                                                 arr[0]=user1.username[i];
                                                 outtextxy(x,y-10,arr);
                                                 user1.username[i]='\0';
                                                 continue;
                                   }
                                   arr[1]='\0';
                                   settextstyle(8,0,2);
                                   outtextxy(x,y-10,arr);
                                   user1.username[i]=arr[0];
                                   x=x+sp;i++;
                    }
                    user1.username[i]='\0';
                    i=0;
                    while(!kbhit())
                    {
                                   settextstyle(8,0,4);
                                   setcolor(0);   
                                   moveto(x1,y+140);
                                   lineto(x1,y+160);
                                   delay(100);
                                   setcolor(1);
                                   lineto(x1,y+140);
                                   setcolor(15);
                                   arr[0]=(char)getch();
                                   if ((arr[0]==9)||(arr[0]==13))                //ascii value for "tab"=9
                                   break;
                                   if(arr[0]==8)
                                   {
                                                 setcolor(1);
                                                 i=i-1; x=x-sp;
                                                 arr[0]=user1.password[i];
                                                 outtextxy(x,y-10,arr);
                                                 user1.password[i]='\0';
                                                 continue;
                                   }
                                   arr[1]='\0';
                                   settextstyle(8,0,2);
                                   outtextxy(x1,y+140,"*");
                                   user1.password[i]=arr[0];
                                   x1=x1+sp;i++;
                    }
                    user1.password[i]='\0';
          }  
                            
         if((p>460 && p<750) && (q>450 && q<470))
         {
              showerrorbox("Try and remember it!!");
         }
          
     }      
         
}  



void login()
{
     int k=0;
     do
     {
         k++;
     cleardevice();
     setfillstyle(1,1);
     floodfill(100,100,1);
     settextstyle(8,0,6);
     setbkcolor(1);
     setcolor(15);
     outtextxy(250,200,"User name : ");
     rectangle(690,190,1000,260);
     outtextxy(280,350,"Password :");
     rectangle(690,340,1000,410);
     settextstyle(1,0,3);
     outtextxy(460,450,"Forgot password?");
     setcolor(12);
     rectangle(180,150,1050,500);
     
     inputlogin(720,220,12);
     
     char found='n';
     ifstream use2("Accounts.dat");
     while(use2.read((char*)&user2,sizeof(user2)))
     {
                       if((!strcmp(user2.username,user1.username)) && (!strcmp(user2.password,user1.password)))
                       {
                                           user1=user2;
                                           use2.close();
                                           processing(0);
                                           main1();
                                           found='y';
                                           break;
                       }
     }
                       
     if (found=='n')
     {
                    cleardevice();
                    settextstyle(8,0,7);
                    outtextxy(370,200,"Wrong Password!");
                    outtextxy(480,400,"TRY AGAIN");
                    delay(3000);
                    continue;
     }
     else 
     break;
     }while(k<3);
     
     if(k==3)
     exit(0);
     
    
}



void signup()
{
     cleardevice();
    setfillstyle(1,1);
    floodfill(100,100,1); 
    settextstyle(8,0,4);
    setbkcolor(1);
    setcolor(15);
    outtextxy(200,50,"First Name          :");
    outtextxy(200,170,"Last Name           :");
    outtextxy(200,290,"User Name           :");
    outtextxy(200,410,"Password            :");
    outtextxy(200,530,"Confirm Password    :");
    rectangle(750,30,1050,90);
    rectangle(750,150,1050,210);
    rectangle(750,270,1050,330);
    rectangle(750,390,1050,450);
    rectangle(750,510,1050,570);
    
    setcolor(12);
    setbkcolor(1);
    settextstyle(1,0,3);
    outtextxy(425,610,"Press enter to Sign up");
    setbkcolor(1);
    
    inputsignup(770,60,12);
    
    if(strcmp(user1.check,user1.password))
    {
                                          cleardevice();
                                          settextstyle(8,0,7);
                                          outtextxy(200,200,"Passwords do not match!");
                                          outtextxy(480,400,"TRY AGAIN");
                                          delay(3000);
                                          signup();
    }
                                        
    ofstream use1("Accounts.dat",ios::app);
    use1.write((char*)&user1,sizeof(user1));
    use1.close();
    processing(1);
    cleardevice();
    settextstyle(8,0,5);
    setcolor(11);
    setbkcolor(1);
    outtextxy(140,200,"Thank you for creating a new account");
    outtextxy(55,400,"You will now be redirected to your Home Screen");
    delay(3000);
    closegraph();
    main1();
}

     


void deleacc()
{
     
     cleardevice();
     setfillstyle(1,1);
     floodfill(100,100,1);
     setcolor(12);
     setbkcolor(BLUE);
     settextstyle(1,0,4);
     outtextxy(60,50,"Please re-enter your account details for security reasons");
     
     settextstyle(8,0,6);
     setbkcolor(1);
     setcolor(15);
     outtextxy(250,200,"User name : ");
     rectangle(690,190,1000,260);
     outtextxy(280,350,"Password :");
     rectangle(690,340,1000,410);
     settextstyle(1,0,3);
     outtextxy(460,450,"Forgot password?");
     setcolor(12);
     rectangle(180,150,1050,500);
     
     inputlogin(720,220,12);
     
     char found='n';
     ifstream use3("Accounts.dat",ios::in);
     ofstream use4("temp.dat",ios::out|ios::app);
         
     while(!use3.eof())
     {       
             use3.read((char*)&user3,sizeof(user3));
             
             if((strcmp(user3.username,user1.username)) && (strcmp(user3.password,user1.password)))
             use4.write((char*)&user3,sizeof(user3)); 
             else
             {            
                          found='y';
                          continue;
             }             
                                                                                               
     }
     use3.close();
     use4.close();
                     
     remove("Accounts.dat");
     rename("temp.dat","Accounts.dat");
     
     if(found=='n')
     {
                    cleardevice();
                    settextstyle(8,0,7);
                    outtextxy(370,200,"Wrong Password!");
                    outtextxy(480,400,"TRY AGAIN");
                    delay(3000);
                    
                    deleacc();
     }
     else
     {
         processing(1);
         cleardevice();
         setfillstyle(1,1);
         floodfill(100,100,1);
         setcolor(12);
         settextstyle(1,0,5);
         setbkcolor(BLUE);
         outtextxy(200,200,"Thank you for your membership");
         outtextxy(200,350,"Your account has been deleted");
         
         delay(4000);
         exit(0);
     }
                                                    
}



void updatefunds()
{
         long pos;
         fstream obj("Accounts.dat",ios::in|ios::out);
         while(!obj.eof())
         {
                          pos=obj.tellg();
                          obj.read((char*)&user2,sizeof(user2));
                          if(!strcmp(user2.username,user1.username))
                          {
                                                            obj.seekg(pos);
                                                            obj.write((char*)&user1,sizeof(user1));
                          }
         }
         obj.close();
}

     

void ccarddet()
{
    initwindow(1275,700);
    setfillstyle(1,1);
    floodfill(100,100,1);
    setcolor(12);
    setbkcolor(BLUE);
    settextstyle(0,0,7);
    outtextxy(230,30,"Account Details");
    
    settextstyle(8,0,6);
    setbkcolor(1);
    setcolor(15);
    outtextxy(160,150," First Name    :");
    outtextxy(160,250," Last Name     :");
    outtextxy(160,350," User Name     :");
    outtextxy(160,450," Funds         :");
    
    outtextxy(800,150,user1.fname);
    outtextxy(800,250,user1.lname);
    outtextxy(800,350,user1.username);
    outtextxy(800,450,"Rs.");
    outintxy(890,450,user1.funds);
    
    setcolor(7);
    rectangle(140,550,440,650);
    rectangle(840,550,1140,650);
    setfillstyle(1,7);
    floodfill(300,600,7);
    setfillstyle(1,7);
    floodfill(950,600,7);
    settextstyle(0,0,4);
    setcolor(0);
    setbkcolor(7);
    outtextxy(152,580,"Add Funds");
    outtextxy(895,565,"Delete");
    outtextxy(880,610,"Account");
    
    setcolor(7);
    settextstyle(0,0,2);
    rectangle(590,620,690,680);
    setfillstyle(1,7);
    floodfill(650,650,7);
    setcolor(0);
    outtextxy(610,640,"Back");
    
    int r = getmaxx( );
    int s = getmaxy( );
    setmousequeuestatus(WM_LBUTTONDOWN);
    while(!ismouseclick(WM_LBUTTONDOWN));
    {
                                        getmouseclick(WM_LBUTTONDOWN,r,s);
                                        if((r>140 && r<440) && (s>550 && s<650))
                                        {
                                                  inputcredit(770,60,12);
                                                  processing(1);
                                        }
                                        else if((r>840 && r<1140) && (s>550 && s<650))
                                        deleacc();
                                        else if((r>590 && r<690) && (s>620 && s<680))
                                        {
                                             closegraph();
                                             home();
                                             recommend(10,11);
                                        }                                                                   
    }
                                        
    
    if(!ccardcheck())
    {
                     cleardevice();
                     setfillstyle(1,1);
                     floodfill(100,100,1);
                     setcolor(12);
                     setbkcolor(BLUE);
                     settextstyle(0,0,4);
                     outtextxy(100,200,"Invalid Debit Card details entered!");
                     outtextxy(100,500,"         Please Try again");
                     delay(3000);
                     closegraph();
                     ccarddet();
    }
    else 
    {
         user1.funds+=amount;
         updatefunds();
         cleardevice();
         setfillstyle(1,1);
         floodfill(100,100,1);
         setcolor(12);
         setbkcolor(BLUE);
         settextstyle(0,0,4);
         outtextxy(200,200,"         Thank You!");
         outtextxy(200,500,"Your funds have been updated");
         delay(3000);
         closegraph();
         home();
         recommend(10,11);
    
    }
}


int confirm(int cst)
{
    int x=0,y=0;
    settextstyle(1,0,7);
    setcolor(10);
    setbkcolor(1);
    outtextxy(80,250,"Confirm your purchase?");
    setcolor(7);
    rectangle(450,350,550,400);
    rectangle(700,350,800,400);
    setfillstyle(1,7);
    floodfill(451,351,7);
    floodfill(701,351,7);
    setcolor(0);
    setbkcolor(7);
    settextstyle(1,0,4);
    outtextxy(457,360,"Yes");
    outtextxy(717,360,"No");
    x = getmaxx( );
    y = getmaxy( );
    
    
                  setmousequeuestatus(WM_LBUTTONDOWN);
    
                  while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        if((x >450 && x < 550 ) && ( y > 350 && y< 400))
                                        {
                                             if(user1.funds>cst)
                                             {
                                                                user1.funds=user1.funds-cst;
                                                                updatefunds();
                                                                download();
                                                                return 1; 
                                             }
                                             else 
                                             return 0;
                                             
                                        }
                                        if((x >700 && x < 800 ) && ( y > 350 && y< 400))
                                        {
                                             home();
                                             recommend(10,11); 
                                             return 0;
                                        }
                     }
}




