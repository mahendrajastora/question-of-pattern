/*
Q9
    *
   ***
  *****
 *******
*********

*/

#include<stdio.h>
main()
{
    int i,j,k,n,count,temp=1;
    printf("n=");
    scanf("%d",&n);
    count=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=count;j++)
        {
            printf(" ");

        }
        for(k=1;k<=temp;k++)
        {
            printf("*");
        }
        count--;
        temp+=2;
        printf("\n");
    }
}

