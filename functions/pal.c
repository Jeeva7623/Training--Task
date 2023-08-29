//Create a function to check if a string is a palindrome.
#include<stdio.h>

char pal(char a[],int len)
{
    int i,found=0,k=len;
    for(i=0 ; i<len ;i++)
    {
         if(a[k] == a[i])
        {
            found = 1;
        }
        else
        {
            found = 0;
        }
        k--;
    }
    if(found == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}

int main()
{
    char a[100];
    int len=0;
    // printf("Enter total value");
    // scanf("%d",&n);
    printf("Enter String");
    scanf("%s",&a);
    //len = sizeof(a)/sizeof(a[0]);
    for(int i=0 ; a[i]!='\0';i++)
    len++;
    //printf("%d",len);
    pal(a,len);
}
