#include<stdio.h>
int main()
{
    int a,b,c=0;
    char op;
    printf("enter the value of a :-  \n");
    scanf("%d",&a);
    printf("enter the value of b :-  \n");
    scanf("%d",&b);
    printf("enter the operation you want to perform :-  \n");
    scanf(" %c",&op);

    switch(op)
    {case '+':
        c=a+b;
        printf("The sum of a and b is %d",c);
        break;
    case '-':  
        c=a-b;
        printf("The difference of a and b is %d",c);
        break;  
    case '*':      
        c=a*b;
        printf("The product of a and b is %d",c);
        break;
    case '/':
        if(a>b)
        {
        c=a/b;
        printf("The division of a and b is %d",c);}
        else
        (printf("Division is not possible"));
        break;    
   // printf("\n The result of the operation is %d",c);
    default:
        printf("Invalid operation");
        break;
    }
   printf("\n The result of the operation is %d",c);
return 0;
}