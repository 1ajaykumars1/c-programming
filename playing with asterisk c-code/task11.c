/*
A
B B
C C C
D D D D
E E E E E
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
        printf("%c ",ch);
    }
    printf("\n");
    ch++;
}
}
