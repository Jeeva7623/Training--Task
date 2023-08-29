/*Write a function that takes two integers as input and returns their
sum.*/

#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter a and b number");
    scanf("%d %d",&a,&b);
    printf("the sum of two integers is %d",sum(a,b));
}