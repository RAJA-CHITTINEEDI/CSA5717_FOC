#include <stdio.h>
int main()
{
   int n,i,sum=0;
   //printf("enter the n value");
   scanf("%d",&n);
   for(i=2;i<=n;i=i+2){
       sum=sum+i;
   }
   printf("the sum value=%d",sum);
   return 0;
}
