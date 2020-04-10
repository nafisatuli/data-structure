#include<stdio.h>
#include<math.h>
int main()
{
    char x[100];
    int k=0,sum=0,l,i,p=0;
    gets(x);
    l=strlen(x);
    for(i=l-1;i>=0;i--)
    {
        p=(x[i]-48)*pow(8,k);
        k++;
        sum=sum+p;
    }
    printf("%d",sum);
}
