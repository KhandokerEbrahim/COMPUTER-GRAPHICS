
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


/*#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>*/
int maxx, maxy, midx, midy;
 int x, y, z, ang, x1, x2;
void axis();

void translation()
{

  outtextxy(100, 20, "TRANSLATION");
    printf("\n\n Enter Translation vector: ");
    scanf("%d%d", &x, &y);
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + (x + 100), midy - (y + 20), midx + (x + 60), midy - (y + 90), 20, 5);
    axis();
}
void scalling(){
  outtextxy(100, 20, "SCALING");
    printf("\n Enter Scaling Factor: ");
    scanf("%d%d%d", &x, &y, &z);
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + (x * 100), midy - (y * 20), midx + (x * 60), midy - (y * 90), 20 * z, 5);
    axis();
}
void rotation(){
    int y1, y2;

   outtextxy(100, 20, "ROTATION");
    printf("\n EnterRotation angle: ");
    scanf("%d", &ang);
    x1 = 100 * cos(ang * 3.14 / 180) - 20 * sin(ang * 3.14 / 180);
    y1 = 100 * sin(ang * 3.14 / 180) + 20 * sin(ang * 3.14 / 180);
    x2 = 60 * cos(ang * 3.14 / 180) - 90 * sin(ang * 3.14 / 180);
    y2 = 60 * sin(ang * 3.14 / 180) + 90 * sin(ang * 3.14 / 180);
    axis();

     printf("\n After rotating about z-axis\n");
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + x1, midy - y1, midx + x2, midy - y2, 20, 5);
    axis();
    printf("\n After rotating about x-axis\n");
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + 100, midy - x1, midx + 60, midy - x2, 20, 5);
    axis();
    printf("\n After rotating about y-axis\n");
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + x1, midy - 20, midx + x2, midy - 90, 20, 5);
    axis();

    closegraph();
}

int main()
{
    int gdriver=DETECT,gmode;

    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    setfillstyle(3, 25);
    maxx = getmaxx();
    maxy = getmaxy();
    midx = maxx / 2;
    midy = maxy / 2;
    outtextxy(100, 100, "Original object");
    line(midx, 0, midx, maxy);
    line(0, midy, maxx, midy);
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    axis();


      cout<<"1. translation\n";
      cout<<"2. scalling\n";
      cout<<"3. rotation\n";


    while(1){

      int choice ;
      cout<<"Enter your choice: ";
      cin>>choice;

      if(choice == 1){
        translation();
      }else if(choice == 3){
        rotation();
      }else if(choice ==2){
        scalling();
      }
    }




}

void axis()
{
    getch();
    cleardevice();
    line(midx, 0, midx, maxy);
    line(0, midy, maxx, midy);
}