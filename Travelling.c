#include<stdio.h>
int main()
{
    int aa[100],i,n,t,j,a,b;
    while(1)
    {
        printf("Input No. of Elements\n");
        scanf("%d",&n);
        printf("Input Elements\n");
        for(i=1; i<=n; i++)
        {
            scanf("%d",&aa[i]);
        }
        printf("Swap positions\n");
        scanf("%d %d",&a,&b);
        for(i=1; i<=n; i++)
        {
            if(i==a)
            {
                t=aa[i];
                aa[i]=aa[b];
                aa[b]=t;
            }
        }
        for(i=1; i<=n; i++)
        {
            printf("%d ",aa[i]);
        }
        printf("\n");
    }
}
