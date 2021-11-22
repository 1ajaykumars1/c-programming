/*
A B C D E
A B C D
A B C
A B
A
*/
#include<stdio.h>
int main()
{
int i,j,n;
char ch;
printf("enter how many rows you want to print");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    ch='A';
    for(j=1;j<=i;j++)
    {
        printf("%c ",ch++);
    }
    printf("\n");
}
}
