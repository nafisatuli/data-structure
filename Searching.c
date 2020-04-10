#include<stdio.h>
#include<string.h>
int main()
{
    int aa[100],n,i,a,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&aa[i]);
    }
    printf("Input Element to search\n");
    scanf("%d",&a);
    for(j=1; j<=n; j++)
    {
        if(aa[j]==a)
            printf("Index=%d\n",j);
    }
}

