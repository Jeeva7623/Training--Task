/*Create a function that calculates the factorial of a given integer.*/
#include<stdio.h>
int fact(int n,int fact)
{
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    int fact1 = 1,n;
    printf("Enter N number");
    scanf("%d",&n);
    printf("the fcatorial is %d",fact(n,fact1));
}