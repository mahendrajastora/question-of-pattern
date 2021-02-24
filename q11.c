
/*
Q11

 123456789
  1234567
   12345
    123
     1

*/

#include<stdio.h>
main()
{
    int i,j,k,n,count,temp,start;
    printf("n=");
    scanf("%d",&n);
    count=1;
    temp=1+(n-1)*2;
    for(i=1;i<=n;i++)
    {
     start=1;
        for(j=1;j<=count;j++)
        {
            printf(" ");
        }
        for(k=temp;k>=1;k--)
        {
            printf("%d",start);
            start++;
        }
        count++;
        temp-=2;

        printf("\n");
    }
}
