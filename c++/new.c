#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    textcolor(RED);
    textbackground(WHITE);
    for(int i=1;i<=100;i++)
    {
        printf("this is my pc");
        delay(200);
    }
    getch();
}