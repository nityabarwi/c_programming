#include<stdio.h>
#include<conio.h>

void swap(int x, int y);
void main()
{
    int a, b;
    printf ("Enter two numbers:");
    scanf ("%d %d",&a,&b);
    swap (a, b);
    getch();    
}

void swap (int x, int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    printf ("After swapping values are x=%d and y=%d",x, y);
}