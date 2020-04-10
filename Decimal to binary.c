#include<stdio.h>
int main()
{
    int a[100],i=0,j,n,x;
    scanf("%d",&n);
    while(1)
    {
        x=n/2;
        a[i]=n%2;
        i++;
        n=x;
        if(n==0)
            break;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
    return 0;

}
