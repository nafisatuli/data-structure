#include<stdio.h>
int main()
{
    int aa[100],bb[100],i,n,b,p;
    printf("Input elements\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&aa[i]);
    }
    printf("Input position & value\n");
    scanf("%d %d",&p,&b);
    for(i=n-1; i>=p; i--)
        {
        aa[i+1]=aa[i];
        }
    aa[p]=b;
    for(i=0; i<=n; i++)
    {
        printf("%d ",aa[i]);
    }
}
