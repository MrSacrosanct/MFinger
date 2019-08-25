#include <graphics.h>
#include <conio.h>
//#include <iostream.h>
void main()
{
 int i,ch, gd=DETECT, gm;
 clrscr();
/* cout<<"\nWanna See something? ";
 cin>>ch;
 if(ch=='y'||ch=='Y')
 {*/
 initgraph(&gd,&gm,"c://Turboc3//bgi");
 for(i=0;i<=100;++i)
 {
   delay(25);
   cleardevice();

    //thumb
  arc(175,225,90,180,25);
  line(150,225,150,250);
  arc(175,250,180,270,25);
 //first
arc(200,200,0,180,25);
 line(175,200,175,335);
 line(225,200,225,250);
   //second
   arc(250,200-i,0,180,25);
   line(225,200-i,225,250);
   line(275,200-i,275,250);
  //third
 arc(300,200,0,180,25);
 line(325,200,325,250);
 //fourth
 arc(350,200,0,180,25);
 line(375,200,375,335);
 //bottom
 arc(275,100,247,293,255);
 }
 getch();
 }
