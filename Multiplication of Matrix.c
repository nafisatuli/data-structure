#include<stdio.h>
int main()
{
    int n,m,p,q,i,j,k,a[100][100],b[100][100],c[100][100],s=0;
    printf("Input 1st Matrix row & coloum: \n");
    scanf("%d %d",&n,&m);
    printf("Input elements: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input 2nd Matrix row & coloum: \n");
    scanf("%d %d",&p,&q);
    printf("Input elements: \n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st Matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("2nd Matrix\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            s=0;
            for(k=0; k<p; k++)
            {
                s+=(a[i][k]*b[k][j]);
            }

            c[i][j]=s;
        }

    }
    printf("After multiplication of Matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
