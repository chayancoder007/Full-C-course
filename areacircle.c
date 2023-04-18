// Here we will find area of a circle by taking values from user So lets get started
#include<stdio.h>
#include<conio.h>
void main()
{
    // We need to take float as a data type as the value of pie is 3.14
     float pi=3.14,r,d,area;
     clrscr();
     printf("enter daimeter :");
     scanf("%f",&d);
     r=d/2;
     printf("enter radius : ");
     scanf("%f",&r);

     area=pi*r*r;

     printf("Area of the circle is :%f ",area);

     getch(); // it is to hold the screen in turbo c++ not in vs code
}