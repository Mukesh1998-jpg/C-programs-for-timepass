#include <stdio.h>
int main()
{
    int i,n, j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",'A' + j-1);
        }
        printf("\n");
    }
    return 0;
}
