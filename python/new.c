#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int i;
    textcolor(RED);
    textbackground(WHITE);
    for(i=0;i<=100;i++)
    {
        printf("I LOVE YOU");
        delay(200);
    }
    getch();

}