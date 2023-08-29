// Implement a function that reverses a given list.
#include<stdio.h>
 int rev(int a[],int n)
 {
    printf("the reversing list is");
    for(int i=n-1 ; i>=0 ; i--)
    {
        printf(" %d",a[i]);
    }
    return 0;
 }
 int main()
 {
    int a[50];
    int i,n;
    printf("Enter total number of values");
    scanf("%d",&n);
    printf("enter array values");
    for(int i = 0 ;i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    // for(int i = 0 ;i < n ; i++)
    // {
    //     printf(" %d",a[i]);
    // }
   rev(a,n);
    return 0;
 }