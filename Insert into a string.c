#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100],bb[100];
    int la,i,p,n=0,k,x,lb;
    printf("Insert a string\n");
    gets(aa);
    la=strlen(aa);
    printf("Insert a substring\n");
    gets(bb);
    lb=strlen(bb);
    printf("Input a position\n");
    scanf("%d",&p);
    k=p+lb;
    for(i=p;i<la+lb;i++)
    {
        x=aa[i];
        if(n<lb)
        {
            aa[i]=bb[n];
            n++;
        }
        aa[k]=x;
        k++;
    }
    for(i=0;i<la+lb;i++)
    {
        printf("%c",aa[i]);
    }
}
