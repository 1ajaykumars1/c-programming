/*
55555
4444
333
22
1
*/
#include<stdio.h>
int main()
{
    int i,j,n ;
    printf("enter how many rows you want to print");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

