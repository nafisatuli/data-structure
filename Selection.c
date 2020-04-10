#include<stdio.h>
int main()
{
    int a[100],i,j,n,t,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        j=i;
        for(k=i+1; k<n; k++)
        {
            if(a[j]>a[k])
            {
                j=k;
            }
        }
        if(j!=i)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
