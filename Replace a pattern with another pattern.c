#include<stdio.h>
#include<string.h>
int main()
{
    char aa[100],bb[100],cc[100];
    int i,la,lb,p,k=0,j=0;
    printf("Insert a string\n");
    gets(aa);
    la=strlen(aa);
    printf("Delete a string to replace\n");
    gets(bb);
    printf("Insert a string to replace\n");
    gets(cc);
    printf("After delete:\n");
    for(i=0; i<la; i++)
    {
        if(aa[i]==bb[k])
        {
            aa[i]=cc[j];
            k++;
            j++;
        }
    }
    for(j=0;j<la;j++)
    {
        printf("%c",aa[j]);
    }

}
