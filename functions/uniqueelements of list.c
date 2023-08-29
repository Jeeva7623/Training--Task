#include<stdio.h>
int unique(int a[],int len)
{
    int k=0;
    int b[]={ };
    for(int i=0;i<len;i++)
    {
        for(int j=1;j<len;j++)
        {
            if(a[i] != a[j])
            {
                b[k] = a[i];
                k++;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%d",b[i]);
    }
}

void main()
{
    int a[] = {1,1,2,3,4,3};
    for(int i=0;a[i];i++)
    unique(a,i);
}