// Implement a function to check if a number is prime.
#include<stdio.h>
int isprime(int a)
{
    int count = 0;
    for(int i = 0 ; i <= a ; i++)
    {
        if(a % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}
int main()
{
    int a;
    printf("Enter prime number or a number");
    scanf("%d",&a);
    isprime(a);
    return 0;
}