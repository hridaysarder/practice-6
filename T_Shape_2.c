#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }
    return 0;
}