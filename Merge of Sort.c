#include <stdio.h>
int main()
{
    int aa[100],bb[100],cc[100],m,n,i,j,k=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%d", &aa[i]);
    scanf("%d",&m);
    for (j=0; j<m; j++)
        scanf("%d",&bb[j]);
    i = 0;
    j = 0;
    while (i<n&&j<m)
    {
        if (aa[i]<bb[j])
        {
            cc[k]=aa[i];
            i++;
        }
        else
        {
            cc[k]=bb[j];
            j++;
        }
        k++;
    }
    if (i>=n)
    {
        while (j<m)
        {
            cc[k]=bb[j];
            j++;
            k++;
        }
    }
    if (j>=m)
    {
        while (i<n)
        {
            cc[k]=aa[i];
            i++;
            k++;
        }
    }
    printf("%d %d %d",i,j,k);
    for(i=0; i<m+n; i++)
        printf("\n%d",cc[i]);
}
