// Write a function to calculate the area of a circle given its radius.
#include<stdio.h>
int Acircle(int a)
{
    printf("the area of circle");
    return 3.14 * a * a;
}
int main()
{
    int a;
    printf("Enter Circle Diameter");
    scanf("%d",&a);
    printf(" %d",Acircle(a));

    return 0;
}