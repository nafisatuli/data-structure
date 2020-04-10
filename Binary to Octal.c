#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char aa[1100];
    int l,i,x,sum=0,k=0,p;
    while(1)
    {
        scanf("%s",aa);
    l=strlen(aa);
    x=l%3;
     for(k=x-1; k>=0; k-=3)
    {
       if(aa[k-1]=='1'&&aa[k]=='1')
            printf("3");
        else if(aa[k-1]=='1'||aa[k]=='0')
            printf("2");
        else if(aa[k-1]=='0'||aa[k]=='1')
            printf("1");
        else if(aa[k-1]=='0'||aa[k]=='0')
            printf("0");
    }
    for(k=l-1; k>=x; k-=3)
    {


        if(aa[k-2]=='1'&&aa[k-1]=='1'&&aa[k]=='1')
            printf("7");
        else if(aa[k-2]=='1'&&aa[k-1]=='1'&&aa[k]=='0')
            printf("6");
        else if(aa[k-2]=='1'&&aa[k-1]=='0'&&aa[k]=='1')
            printf("5");
        else if(aa[k-2]=='1'&&aa[k-1]=='0'&&aa[k]=='0')
            printf("4");
        else if(aa[k-2]=='0'&&aa[k-1]=='1'&&aa[k]=='1')
            printf("3");
        else if(aa[k-2]=='0'||aa[k-1]=='1'||aa[k]=='0')
            printf("2");
        else if(aa[k-2]=='0'||aa[k-1]=='0'||aa[k]=='1')
            printf("1");
        else if(aa[k-2]=='0'||aa[k-1]=='0'||aa[k]=='0')
            printf("0");
    }
    printf("\n\n");
    }

}
