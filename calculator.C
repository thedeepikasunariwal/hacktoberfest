#include<stdio.h>
void main()
{
  int num1,num2,sum,sub,mult,div,rem,choice;
  printf("enter the value of num1 and num2");
  scanf("%d%d",&num1,&num2);
  printf("enter the choice");
  scanf("%d",&choice);
  if(choice==1)
  {
   sum=num1+num2;
   printf("Addition = %d",sum);
  }
  else if(choice==2)
  {
   sub=num1-num2;
   printf("subtraction = %d",sub);
  }
  else if(choice==3)
  {
   mult=num1*num2;
   printf("multiplication = %d",mult);
  }
  else if(choice==4)
  {
   div=num1/num2;
   printf("division = %d",div);
  }
  else if(choice==5)
  {
   rem=num1%num2;
   printf("remander = %d",rem);
  }
  else
  {
    printf("you have enter the wrong choice");
  }
}
