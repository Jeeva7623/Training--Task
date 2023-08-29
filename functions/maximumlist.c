//Write a function that finds the maximum value in a list of numbers.
#include<stdio.h>

int maxl(int a[],int len)
{
    int i,l;
    l=a[0];
    for(int i = 0 ; i<len ;i++)
    {
        if(l>a[i]);
        {
            l=a[i];
        }
    }
    
    return l;
}

void main()
{
    int a[100],n;
    printf("Enter total values");
    scanf("%d",&n);
    printf("Enter Array values");
    for(int i = 0 ;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The maximum of given list of integers is %d",maxl(a,n));
}