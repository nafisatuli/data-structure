#include<stdio.h>
int main()
{
    int a[100],i,j,n,min;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(min>a[j+1])
            {
                min=a[j];
                a[j]=a[j+1];
                a[j+1]=min;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
