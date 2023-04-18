  #include<stdio.h>
  #include<conio.h>
  
  void main()

  {
     float SI,P,R,T;

     printf("Enter P principal,rate of intrest in % per annum , T time in years ");
     scanf("%f%f%f",&P,&R,&T);

     SI=(P*R*T)/100;

     printf("your simple interst is :%f",SI);

     getch();

  }