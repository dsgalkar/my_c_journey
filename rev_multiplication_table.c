#include<stdio.h>
int main()
//Write a program to print multiplication table of 10 in reversed order
{int n,i;
printf("ENTER THE NUMBER:- ");
scanf("%d",&n);

for(i=11;i>0;i--)
{printf("%d*%d=%d\n",n,i,n*i);}

return 0;
}