#include<stdio.h>
int main()
//Write a program to print multiplication table of a given number n.
{int n,i;
printf("ENTER THE NUMBER:- ");
scanf("%d",&n);

for(i=0;i<11;i++)
{printf("%d*%d=%d\n",n,i,n*i);}

return 0;
}