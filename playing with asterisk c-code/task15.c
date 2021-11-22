/*
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
int main()
{
int i,j,n;
char ch='A';
printf("enter how many rows you want to print");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c ",ch++);
    }
    printf("\n");
}
}
