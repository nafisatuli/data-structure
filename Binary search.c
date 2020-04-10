#include<stdio.h>
int main()
{
    int a[1000],l=1,n,u,i,mid,item;
    while(1)
    {
        l=1;
        printf("Input number of elements\n");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        u=n;
        printf("Input Item\n");
        scanf("%d",&item);
        while(l<=u)
        {
            mid=((l+u)/2);
            if(a[mid]==item)
            {
                printf("%d Found\n",mid);
                break;
            }
            else if(a[mid]>item)
            {
                u=mid-1;
            }
            else if(a[mid]<item)
            {
                l=mid+1;
            }
        }
    }
}
