#include<stdio.h>
int main()
{
    int aa[100],bb[100],cc[100];
    int i,j,k=0,n,m;
    while(1)
    {
        scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&aa[i]);
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&bb[i]);
    i=0;
    j=0,k=0;
    while(i<n||j<m)
    {
        if(aa[i]<bb[j])
        {
            cc[k]=aa[i];
            k++;
            i++;
        }
        else
        {
            cc[k]=bb[j];
            k++;
            j++;
        }
        if(i>=n)
        {
            while(j<m)
            {
                cc[k]=bb[j];
                j++;
                k++;
            }
        }
        else if(j>=m)
        {
            while(i<n)
            {
                cc[k]=aa[i];
                k++;
                i++;
            }
        }
    }
     for(i=0; i<n+m; i++)
        printf("%d ",cc[i]);
        printf("\n");
    }

}
