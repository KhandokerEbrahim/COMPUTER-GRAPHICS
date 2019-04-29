
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;

int  main() {



       int gd=DETECT,gm;
       initgraph(&gd,&gm,"C:\\tc\\bgi");

      int midx = 300;
    int midy = 300;
    line(300, 0, 300, 600);
    line(0, 300, 600, 300);


   // outtextxy(100, 20, "TRANSLATION");
    printf("\n\n Enter Translation vector: ");
    int x=100,y=100;

    //bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
       bar3d(150, 150, 200, 250 , 20, 5);
      bar3d(150+x, 150+y, 200+x, 250+y , 20, 5);
   // bar3d(midx + (x + 100), midy - (y + 20), midx + (x + 60), midy - (y + 90), 20, 5);
    //axis();



      getch();
}
