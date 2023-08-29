/*Implement a function that checks if a given number is even or odd.*/
#include<stdio.h>

int isodd(int n)
{
        if(n % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
}
void main()
{
    int a;
    printf("Enter odd or even number");
    scanf("%d",&a);
    isodd(a);
}