#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],b[100][100],c[100][100],s=0;
    printf("Input the number of row & column: \n");
    scanf("%d %d",&m,&n);
    printf("Input first matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input second matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("After the addition of two matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
