#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
   int gd = DETECT,gm;
   int x ,y;
   initgraph(&gd, &gm, "X:\\TC\\BGI");
   x = getmaxx()/2;
   y = getmaxy()/2;

   outtextxy(x-100, 50, "ELLIPSE drawing");
      ellipse(x, y, 0, 360, 120, 60);

   getch();
   closegraph();
   return 0;
}
