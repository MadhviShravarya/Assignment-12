#include<stdio.h>
void printodd(int);

int main()
{
   int n;
   printf("enter the limit::");
   scanf("%d",&n);
   printodd(n);
   return 0;
}
 void printodd(int n)
 {
   if(n>0)
   {
    printodd(n-1);
    printf("%d\n",2*n-1);
    
    
   }


 } 

