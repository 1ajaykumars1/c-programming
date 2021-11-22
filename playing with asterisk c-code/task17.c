/*
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1
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
   if(i%2==0)
    printf("0 ");
   else
    printf("1 ");
    }
    printf("\n");
}
}
