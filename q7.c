/*
Q7
    1
   21
  321
 4321
54321

*/

#include<stdio.h>
main()
{
    int i,j,n,k,count;
    printf("n=");
    scanf("%d",&n);
    count=n-1;
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=count;k++)
    {
        printf(" ");
    }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);

        }

    printf("\n");
    count--;
    }
}
