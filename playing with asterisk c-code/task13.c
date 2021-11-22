/*
A
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
int i,j,n;
char ch;
printf("enter how many rows you want to print");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    ch='A';
    for(j=1;j<=i;j++)
    {
        printf("%c ",ch++);
    }
    printf("\n");
}
}
