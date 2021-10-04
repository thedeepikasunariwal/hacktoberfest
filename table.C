#include<stdio.h>
void main()
{
  int n,i,table;
  printf("enter the numbar");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    table=n*i;
    printf("%d*%d=%d\n",n,i,table);
  }
}
