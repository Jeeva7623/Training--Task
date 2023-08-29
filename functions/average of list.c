// create a function to find the average of a list of numbers.
// Implement a function that reverses a given list.
#include<stdio.h>
 int rev(int a[],int n)
 {
    int sm = 0;
    for(int i=0 ; i<n ; i++)
    {
        sm += a[i];
        //printf(" %d",sm);
    }
    return sm/n;
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
   printf("The average list of numbers is %d",rev(a,n));
    return 0;
 }
