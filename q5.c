/*
Q4
12345
 1234
  123
   12
    1

*/
#include<stdio.h>
main()
{
    int i,j,n,k,count=0;
    printf("n=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    for(k=1;k<=count;k++)
    {
        printf(" ");
    }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }

    printf("\n");
    count++;
    }
}
