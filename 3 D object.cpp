
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;

int  main() {



      int gd=DETECT,gm;
      initgraph(&gd,&gm,"C:\\tc\\bgi");



        rectangle(100,100,200,200 );
        rectangle(150,150,250,250 );
        line(100,100 ,150,150);
        line(100,200 ,150,250);
        line(200,200,250,250);
        line(200,100,250,150);


    getch();
}
