#include<stdio.h>
int main()
{
    int n,i=0,j,x,a[100];
    scanf("%d",&n);
    while(1)
    {
        x=n/16;
        a[i]=n%16;
        i++;
        n=x;
        if(n==0)
            break;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==10)
        {
            printf("A");
        }
        else if(a[j]==11)
        {
            printf("B");
        }
        else if(a[j]==12)
        {
            printf("C");
        }
        else if(a[j]==13)
        {
            printf("D");
        }
        else if(a[j]==14)
        {
            printf("E");
        }
        else if(a[j]==15)
        {
            printf("F");
        }
    }
    return 0;
}
