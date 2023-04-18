// Here in this program were are using all the arthmetic operators //
#include<stdio.h>
#include<conio.h>

void main()

{
    // we will use + , - , * , / , % . //
    // we will use float as a data type as we can also input data as decimals //

    float a,b,c=0;

    printf("enter the value of a and b :");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("\nYour addition is :%f ",c);  // we use \n for new line //
    c=a-b;
    printf("\nYour substaction is :%f",c);
    c=a*b;
    printf("\nYour multiplication is :%f",c);
    c=a/b;
    printf("\nYour division  is :%f",c);
}