#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void bress(float x1,float y1, float x2,float y2)
{
    int x,y,end,inc=0,p,dx=abs(x2-x1),dy=abs(y2-y1),c=10,current=0;
    if ( dx > dy )
    {
        p=2*dy-dx;
        if(x1<x2)
        {
            x=x1;
            y=y1;
            end=x2;
            if(y1<y2)
                inc=1;
            if(y1>y2)
                inc=-1;
        }
        else
        {
            x=x2;
            y=y2;
            end=x1;
            if(y2<y1)
                inc=1;
            if(y2>y1)
                inc=-1;
        }
        while(x<=end)
        {
            putpixel(x,y,15);
            if(p<0)
                p=p+2*dy;
            else
            {
                y=y+inc;
                p=p+2*(dy-dx);
            }
            x++;
            if(current==0 && c==10)
            {
                current=1;
                c=-1;
            }
            if(current==1 && c==6)
            {
                current=0;
                c=-1;
            }
            c++;
        }
    }
    else
    {
        p=2*dx-dy;
        if(y1<y2)
        {
            x=x1;
            y=y1;
            end=y2;
            if(x1<x2)
                inc=1;
            if(x1>x2)
                inc=-1;
        }
        else
        {
            x=x2;
            y=y2;
            end=y1;
            if(x2<x1)
                inc=1;
            if(x2>x1)
                inc=-1;
        }
        while(y<=end)
        {
            putpixel(x,y,15);
            if(p<0)
                p=p+2*dx;
            else
            {
                x=x+inc;
                p=p+2*(dx-dy);
            }
            y++;
            if(current==0 && c==10)
            {
                current=1;
                c=-1;
            }
            if(current==1 && c==6)
            {
                current=0;
                c=-1;
            }
            c++;
        }
    }
}
int main()
{
    float x1,x2,a,b,c,d,y1,y2;
    double ch;
    int t=30;
    int gd=DETECT,gm=DETECT;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    printf("Enter the end pts of the line(x,y):\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    bress(x1,y1,x2,y1);
    bress(x2,y1,x2,y2);
    bress(x1,y2,x2,y2);
    bress(x1,y2,x1,y1);
    bress(x1+t,y1+t,x2+t,y1+t);
    bress(x2+t,y1+t,x2+t,y2+t);
    bress(x1+t,y2+t,x2+t,y2+t);
    bress(x1+t,y2+t,x1+t,y1+t);
    bress(x1,y1,x1+t,y1+t);
    bress(x2,y1,x2+t,y1+t);
    bress(x1,y2,x1+t,y2+t);
    bress(x2,y2,x2+t,y2+t);
    /*
    a=x1+(10*y1);
    b=x2+(10*y1);
    c=(10*x1)+y1;
    d=(10*x2)+y1;*/
    bress(x1+50,y1+40,x2+50,y1+40);
    bress(x1+t,y2+t,x1+50,y1+40);
    bress(x2+t,y2+t,x2+50,y1+40);
    bress(x1+50,y1+40,x1,y1);
    bress(x2+50,y1+40,x2,y1);
    getch();
    closegraph();
}
