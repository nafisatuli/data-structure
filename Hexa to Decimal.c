#include<stdio.h>
#include<math.h>
int main()
{
    char a[1100];
    int i,l,x,sum=0,k=0;
    scanf("%s",&a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        if(a[k]=='A')
        {
            x=(10)*pow(16,i);
        }
        else if(a[k]=='B')
        {
          x=(11)*pow(16,i);
        }
        else if(a[k]=='C')
        {
           x=(12)*pow(16,i);
        }
        else if(a[k]=='D')
        {
            x=(13)*pow(16,i);
        }
        else if(a[k]=='E')
        {
           x=(14)*pow(16,i);
        }
        else if(a[k]=='F')
        {
            x=(15)*pow(16,i);
        }
        else
        {
            x=(a[k]-48)*pow(16,i);
        }
        k++;
        sum+=x;
    }
    printf("%d",sum);
    return 0;
}
