/*
Q15
    1
   123
  12345
 1234567
123456789
*/
#include<stdio.h>
main()
{
   int n,z=1,i,j,k;
   printf("n=");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    for(j=n-1;j>=i;j--)
   printf(" ");
   for(k=1;k<=z;k++)
    printf("%d",k);
   z+=2;
   printf("\n");
   }
}
