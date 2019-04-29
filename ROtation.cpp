
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;

int  main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");
    int midx = 300;
    int midy = 300;
    line(300, 0, 300, 600);
    line(0, 300, 600, 300);

    int ang;
    ang = 90;

    int    x1 = 100 * cos(ang * 3.14 / 180) - 20 * sin(ang * 3.14 / 180);
    int y1 = 100 * sin(ang * 3.14 / 180) + 20 * sin(ang * 3.14 / 180);
    int x2 = 60 * cos(ang * 3.14 / 180) - 90 * sin(ang * 3.14 / 180);
    int  y2 = 60 * sin(ang * 3.14 / 180) + 90 * sin(ang * 3.14 / 180);



    bool X = 0, Y = false, Z = true;
    if(Z)
    {
        printf("\n After rotating about z-axis\n");
        bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
        bar3d(midx + x1, midy - y1, midx + x2, midy - y2, 20, 5);
    }

    if(X)
    {
         printf("\n After rotating about x-axis\n");
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + 100, midy - x1, midx + 60, midy - x2, 20, 5);

    }
    if(Y)
    {
        printf("\n After rotating about y-axis\n");
    bar3d(midx + 100, midy - 20, midx + 60, midy - 90, 20, 5);
    bar3d(midx + x1, midy - 20, midx + x2, midy - 90, 20, 5);
    }


    getch();
}


