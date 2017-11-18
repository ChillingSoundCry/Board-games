# Board-games
//The following remarks are in Chinese, because they are not bothered to change
//The image library used is graphics.h
//The material hasn't been uploaded yet, and there will be time to upload it
#define SHOW_CONSOLE
#include"graphics.h"
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iostream.h>
#define xx	600  //窗口横向分辨率
#define yy	450  //窗口纵向分辨率
class Game
{
public:
	void player1(int x,int y,bool &p1,bool &p2,bool &p3,bool &p4,bool &p5,bool &p6,bool &p7,bool &p8,bool &p9)
	{  
		if(y>=150 && y<=300 && x>=190 && x<=410)//zhong
		{
			        p5=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(200,160, img5);
                    delimage(img5);
		}
		else if(y>=0 && y<=150 && x>=190 && x<=410)//up
		{
			p2=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(200,10, img5);
                    delimage(img5);
		}
		else if(y>=300 && y<=450 && x>=190 && x<=410)//down
		{
			p8=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(200,310, img5);
                    delimage(img5);
		}
		else if(y>=0 && y<=150 && x>=0 && x<=190)//life up
		{
			        p1=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(20,20, img5);
                    delimage(img5);
		}
		else if(y>=150 && y<=300 && x>=0 && x<=190)//life zhong
		{
			p4=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(10,160, img5);
                    delimage(img5);
		}
		else if(y>=300 && y<=450 && x>=0 && x<=190)//life down
		{
			p7=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(10,310, img5);
                    delimage(img5);
		}
		else if(y>=150 && y<=300 && x>=410 && x<=600)//right zhong
		{
			p6=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(420,160, img5);
                    delimage(img5);
		}
		else if(y>=0 && y<=150 && x>=410 && x<=600)//ringht up
		{
			p3=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(420,10, img5);
                    delimage(img5);
		}
		else if(y>=300 && y<=450 && x>=410 && x<=600)//righut down
		{
			p9=true;
					PIMAGE img5 = newimage();
                    getimage(img5, "5.jpg",0,0);
                    putimage(420,310, img5);
                    delimage(img5);
		}
	}
	void player2(int x,int y,bool &pp1,bool &pp2,bool &pp3,bool &pp4,bool &pp5,bool &pp6,bool &pp7,bool &pp8,bool &pp9)
	{
		if(y>=150 && y<=300 && x>=190 && x<=410)//zhong
		{
			pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
		}
		else if(y>=0 && y<=150 && x>=190 && x<=410)//up
		{
				pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
		}
		else if(y>=300 && y<=450 && x>=190 && x<=410)//down
		{
				pp8=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,310, img6);
                    delimage(img6);
		}
		else if(y>=0 && y<=150 && x>=0 && x<=190)//life up
		{	
			pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
		}
		else if(y>=150 && y<=300 && x>=0 && x<=190)//life zhong
		{
				pp4=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,160, img6);
                    delimage(img6);
		}
		else if(y>=300 && y<=450 && x>=0 && x<=190)//life down
		{
				pp7=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,310, img6);
                    delimage(img6);
		}
		else if(y>=150 && y<=300 && x>=410 && x<=600)//right zhong
		{
				pp6=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,160, img6);
                    delimage(img6);
		}
		else if(y>=0 && y<=150 && x>=410 && x<=600)//ringht up
		{
				pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
		}
		else if(y>=300 && y<=450 && x>=410 && x<=600)//righut down
		{
				pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
		}
	}
	void drew()
	{
			
	        line(60,150,540,150);
			line(60,300,540,300);
			line(190,20,190,440);
			line(410,20,410,440);
		
	}
	void game()
	{
		cleardevice(); /*清除屏幕*/
		bool a=true,p1,p2,p3,p4,p5,p6,p7,p8,p9,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9;
		p1=p2=p3=p4=p5=p6=p7=p8=p9=pp1=pp2=pp3=pp4=pp5=pp6=pp7=pp8=pp9=false;
		while(1)
		{
			//////////////////////////////
			setcolor(BLACK);
			setfont(50,0,"宋体");
			if(p1&&p2&&p3)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p4&&p5&&p6)
			{
		     	cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p7&&p8&&p9)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p2&&p5&&p8)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p3&&p6&&p9)
			{
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p1&&p5&&p9)
			{
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p3&&p5&&p7)
			{
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			else if(p1&&p2&&p3)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "玩家二黄色败");
			}
			///
			 else if(pp1&&pp2&&pp3)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp4&&pp5&&pp6)
			{
		     	cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp7&&pp8&&pp9)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp2&&pp5&&pp8)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp3&&pp6&&pp9)
			{
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp1&&pp5&&pp9)
			{
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp3&&pp5&&pp7)
			{
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp1&&pp2&&pp3)
			{
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家二黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			//////////////////////////////
		drew();
		int x,y;
		mousepos(&x, &y);
		cout<<"x:"<<x<<" y:"<<y<<endl;
		if(mousemsg())
		{
			mouse_msg msg;
			msg = getmouse();
			if(msg.msg == mouse_msg_down && msg.flags == mouse_flag_left)
			{	
				if(a)
				{
				player1(x,y,p1,p2,p3,p4,p5,p6,p7,p8,p9);
				a=false;
				}
				else
				{
					player2(x,y,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9);
					a=true;
				}
			}

		}
		}
	}
	void robot(int x,int y,bool &pp1,bool &pp2,bool &pp3,bool &pp4,bool &pp5,bool &pp6,bool &pp7,bool &pp8,bool &pp9,bool p1,bool p2,bool p3,bool p4,bool p5,bool p6,bool p7,bool p8,bool p9,bool &b)
	{
		bool S=false,SS=false;
		int num=0;
		srand((unsigned)time(NULL));
		if(b)
		{
		while(1){
			num=rand()%5;
			if(p1)
			{
				if(num==1)
				{
					num=rand()%5;
				}
			}
			else if(p3)
			{
				if(num==2)
				{
					num=rand()%5;
				}
			}
			else if(p7)
			{
				if(num==3)
				{
					num=rand()%5;
				}
			}
			else if(p9)
			{
				if(num==4)
				{
					num=rand()%5;
				}
			}
			else if(p5)
			{
				if(num==5)
				{
					num=rand()%5;
				}
			}
			if(num!=0){
				break;}}}
		b=false;
		if(num==1)
		{
			        pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
		}
		else if (num==2)
		{
			pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
		}
		else if(num==3)
		{
				pp7=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,310, img6);
                    delimage(img6);
		}
		else if(num==4)
		{
				pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
		}
		else if(num==5)
		{
			        pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
		}
		/////////////////////////////////////
		    if(pp1&&pp2&&p3==false)
			{
				S=true;
				   pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
			}

		else if(pp1&&pp3&&p2==false)
			{
			S=true;
				   pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
			}

		else if(pp2&&pp3&&p1==false)
			{
			S=true;
				pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
			}

			else if(pp4&&pp5&&p6==false)
			{
				S=true;
		     pp6=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,160, img6);
                    delimage(img6);
			}

			else if(pp4&&pp6&&p5==false)
			{
				S=true;
	            	pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			}

			else if(pp6&&pp5&&p4==false)
			{
				S=true;
			     	pp4=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,160, img6);
                    delimage(img6);
			}

			else if(pp7&&pp8&&p9==false)
			{
				S=true;				
				pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
				
			}

			else if(pp8&&pp9&&p7==false)
			{
				S=true;
				
				pp7=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,310, img6);
                    delimage(img6);
				
			}

			else if(pp7&&pp9&&p8==false)
			{
				S=true;
				
				pp8=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,310, img6);
                    delimage(img6);
			}

			else if(pp2&&pp8&&p5==false)
			{
				
			S=true;
				pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			}
			else if(pp5&&pp8&&p2==false)
			{
				S=true;
				pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
			}
			else if(pp2&&pp5&&p8==false)
			{
				S=true;
				pp8=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,310, img6);
                    delimage(img6);
			}
			else if(pp6&&pp9&&p3==false)
			{
				S=true;
				
			    pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
				
			}
			else if(pp3&&pp9&&p6==false)
			{
				
				S=true;
			    pp6=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);

                    putimage(420,160, img6);
                    delimage(img6);
				
			}
			else if(pp3&&pp6&&p9==false)
			{
				S=true;
			    pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
				
			}
			else if(pp1&&pp5&&p9==false)
			{
				S=true;
			    pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
				
			}
			else if(pp5&&pp9&&p1==false)
			{
				
				S=true;
			    pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
			
			}
			else if(pp1&&pp9&&p5==false)
			{
				S=true;
			    pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			}
			else if(pp3&&pp5&&p7==false)
			{
			
			S=true;
			    pp7=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,310, img6);
                    delimage(img6);
			}
			else if(pp3&&pp7&&p5==false)
			{
			S=true;
			    pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			
			}
			else if(pp5&&pp7&&p3==false)
			{
				S=true;
			    pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
			
					
			}
			else if(pp1&&pp2&&p3==false)
			{
				S=true;
			pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
				
			}
			else if(pp1&&pp3&&p2==false)
			{
				S=true;
				pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
			}
			else if(pp2&&pp3&&p1==false)
			{
				S=true;
				pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
			}
			//////////////////////////////////////////////////////////////////////////////////////////////////////
			if(S==false)
			{
		    if(p1&&p2&&pp3==false)
			{
				SS=true;
				   pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
			}

		else if(p1&&p3&&pp2==false)
			{
			SS=true;
				   pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
			}

		else if(p2&&p3&&pp1==false)
			{
			SS=true;
				pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
			}

			else if(p4&&p5&&pp6==false)
			{
			SS=true;
		     pp6=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,160, img6);
                    delimage(img6);
			}

			else if(p4&&p6&&pp5==false)
			{
				SS=true;
	            	pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			}

			else if(p6&&p5&&pp4==false)
			{
				
				SS=true;
		     	pp4=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,160, img6);
                    delimage(img6);
			}

			else if(p7&&p8&&pp9==false)
			{
				SS=true;				
				pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
				
			}

			else if(p8&&p9&&pp7==false)
			{
				
				SS=true;
				pp7=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,310, img6);
                    delimage(img6);
				
			}

			else if(p7&&p9&&pp8==false)
			{
				
				SS=true;
				pp8=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,310, img6);
                    delimage(img6);
			}

			else if(p2&&p8&&pp5==false)
			{
				
			SS=true;
				pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			}
			else if(p5&&p8&&pp2==false)
			{
				SS=true;
				pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
			}
			else if(p2&&p5&&pp8==false)
			{
				SS=true;
				pp8=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,310, img6);
                    delimage(img6);
			}
			else if(p6&&p9&&pp3==false)
			{
				
				SS=true;
			    pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
				
			}
			else if(p3&&p9&&pp6==false)
			{
				
				SS=true;
			    pp6=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,160, img6);
                    delimage(img6);
				
			}
			else if(p3&&p6&&pp9==false)
			{
				SS=true;
			    pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
				
			}
			else if(p1&&p5&&pp9==false)
			{
				SS=true;
			    pp9=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,310, img6);
                    delimage(img6);
				
			}
			else if(p5&&p9&&pp1==false)
			{
				
				SS=true;
			    pp1=true;
				PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
			
			}
			else if(p1&&p9&&pp5==false)
			{
				SS=true;
			    pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			}
			else if(p3&&p5&&pp7==false)
			{
			
			SS=true;
			    pp7=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(10,310, img6);
                    delimage(img6);
			}
			else if(p3&&p7&&pp5==false)
			{
			SS=true;
			    pp5=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,160, img6);
                    delimage(img6);
			
			}
			else if(p5&&p7&&pp3==false)
			{
			
				SS=true;

			    pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
			
					
			}
			else if(p1&&p2&&pp3==false)
			{
				
				SS=true;
			pp3=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(420,10, img6);
                    delimage(img6);
				
			}
			else if(p1&&p3&&pp2==false)
			{
				SS=true;
				pp2=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(200,10, img6);
                    delimage(img6);
			}
			else if(p2&&p3&&pp1==false)
			{
				SS=true;
				pp1=true;
					PIMAGE img6 = newimage();
                    getimage(img6, "6.jpg",0,0);
                    putimage(20,20, img6);
                    delimage(img6);
			}
			////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if(SS==false)
			{//这里实在不想写了所以，除非是不会玩井字棋，不然写了这里也没啥用，所以给你们自由发挥吧。
			
			}
			}
	}
	    
	////////////////////////
	void game2()
	{
		cleardevice(); /*清除屏幕*/
		int a=1;
		bool b=true,p1,p2,p3,p4,p5,p6,p7,p8,p9,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9;
		p1=p2=p3=p4=p5=p6=p7=p8=p9=pp1=pp2=pp3=pp4=pp5=pp6=pp7=pp8=pp9=false;

		while(1)/////进入游戏
		{
			//////////////////////////////
			setcolor(BLACK);
			setfont(50,0,"宋体");
			if(p1&&p2&&p3)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p4&&p5&&p6)
			{
				Sleep(1000);
		     	cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p7&&p8&&p9)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p2&&p5&&p8)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p3&&p6&&p9)
			{
				Sleep(1000);
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p1&&p5&&p9)
			{
				Sleep(1000);
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p3&&p5&&p7)
			{
				Sleep(1000);
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			else if(p1&&p2&&p3)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "玩家一绿色胜");
				outtextxy(150, 200, "电脑黄色败");
			}
			///
			 else if(pp1&&pp2&&pp3)
			{
				 Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp4&&pp5&&pp6)
			{
				Sleep(1000);
		     	cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp7&&pp8&&pp9)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp2&&pp5&&pp8)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp3&&pp6&&pp9)
			{
				Sleep(1000);
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp1&&pp5&&pp9)
			{
				Sleep(1000);
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			else if(pp3&&pp5&&pp7)
			{
				Sleep(1000);
			    cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");

			}
			else if(pp1&&pp2&&pp3)
			{
				Sleep(1000);
				cleardevice(); /*清除屏幕*/
				outtextxy(150, 100, "电脑黄色胜");
				outtextxy(150, 200, "玩家一绿色败");
			}
			//////////////////////////////
		drew();
		int x,y;
		mousepos(&x, &y);
		cout<<"x:"<<x<<" y:"<<y<<endl;
		if(mousemsg())
		{
			mouse_msg msg;
			msg = getmouse();
			if(msg.msg == mouse_msg_down && msg.flags == mouse_flag_left)
			{	
				if(a==1)
				{
				player1(x,y,p1,p2,p3,p4,p5,p6,p7,p8,p9);
				a=0;
				}			
			}
			if(a==0)
			{
				Sleep(200);
				a=1;
				robot(x,y,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,p1,p2,p3,p4,p5,p6,p7,p8,p9,b);
				cout<<"明知道打不过我为什么不投降？？？"<<endl;
			}
		}
		}
	}
};

class mouse
{
public:
	void get(int x,int y)
	{
		mousepos(&x, &y);
		cout<<"x:"<<x<<" y:"<<y<<endl;
	}
	 void jiance1()
	 {	
		int x,y;
		Game g;
		mousepos(&x, &y);
		if(mousemsg())
		{
			mouse_msg msg;
			msg = getmouse();
			if(msg.msg == mouse_msg_down && msg.flags == mouse_flag_left)
			{
				if(x>=270&&x<=340&&y>=350&&y<=385)
				{
					outtextxy(10, 30, "游戏退出");
					closegraph(); // 关闭图形界面
				}
				else if(x>=270&&x<=340&&y>=250&&y<=285)
				{
					outtextxy(10, 30, "井字棋游戏");
					outtextxy(10, 50, "制作者QQ：");
					outtextxy(10, 70, "2112688387");
					outtextxy(10, 90, "黄绿两色区分");
					outtextxy(10, 110, "绿色先,黄色后");
					outtextxy(10, 130, "单人为玩家先");
					outtextxy(10, 150, "单人的话电脑可能会比较。。。");
					outtextxy(10, 170, "。。。。。。");
					outtextxy(10, 200, "这可能就是传说中的人工智障吧");
					outtextxy(10, 220, "23333333333333333333333333333333333333333333333");
				}
				else if(x>=190&&x<=270&&y>=150&&y<=190)//two
				{
					outtextxy(10, 30, "游戏开始~");
					g.game();
				}
				else if(x>=350&&x<=430&&y>=150&&y<=190)//one and robot
				{
					g.game2();
				}
			}

		}
	}
};
void picture()
{
    PIMAGE img1 = newimage();
            getimage(img1, "1.jpg",0,0);
            putimage(190,150, img1);
            delimage(img1);

	PIMAGE img7 = newimage();
            getimage(img7, "7.jpg",0,0);
            putimage(350,150, img7);
            delimage(img7);


	PIMAGE img2 = newimage();
            getimage(img2, "2.jpg",0,0);
            putimage(270,250, img2);
            delimage(img2);


	PIMAGE img3 = newimage();
            getimage(img3, "3.jpg",0,0);
            putimage(270,350, img3);
            delimage(img3);

	PIMAGE img4 = newimage();
            getimage(img4, "4.jpg",0,0);
            putimage(100,0, img4);
            delimage(img4);
}
void all()
{
	int x,y;
	picture();
	mouse m;
	m.get(x,y);
	m.jiance1();
}

int main()
{

	initgraph(xx, yy); // 初始化，显示一个窗口，这里和 TC 略有区别
	setbkcolor(WHITE);
	SetWindowTextA(getHWnd(), "井字棋-----------------------------by:lzp");
	while(1)
	{
		all();
	}
	return 0;
}
